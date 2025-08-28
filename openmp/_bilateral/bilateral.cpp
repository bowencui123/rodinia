#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// simple representation of RGBA pixel
struct uchar4 { unsigned char x, y, z, w; };

extern "C" void LoadBMPFile(uchar4 **dst, unsigned int *width,
                             unsigned int *height, const char *name);
extern "C" void updateGaussianGold(float delta, int radius);
extern "C" void bilateralFilterGold(unsigned int *pSrc, unsigned int *pDest,
                                     float e_d, int w, int h, int r);

int main(int argc, char **argv) {
    if (argc != 6) {
        fprintf(stderr, "Usage: %s <image> <e_d> <g_d> <radius> <output>\n", argv[0]);
        return 1;
    }

    const char *input = argv[1];
    float e_d = atof(argv[2]);
    float g_d = atof(argv[3]);
    int radius = atoi(argv[4]);
    const char *output = argv[5];

    uchar4 *img;
    unsigned int w, h;
    LoadBMPFile(&img, &w, &h, input);

    unsigned int *src = (unsigned int *)img;
    unsigned int *dest = (unsigned int *)malloc(sizeof(unsigned int) * w * h);

    updateGaussianGold(g_d, radius);
    bilateralFilterGold(src, dest, e_d, w, h, radius);

    FILE *f = fopen(output, "wb");
    if (f) {
        fwrite(dest, sizeof(unsigned int), w * h, f);
        fclose(f);
    }

    free(img);
    free(dest);
    return 0;
}
