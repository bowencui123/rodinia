.RECIPEPREFIX = >
CC      = gcc
CFLAGS  = -O3
LDFLAGS = -lm

EXE  = backprop
OBJS = backprop.o backprop_kernel.o facetrain.o imagenet.o

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $(OBJS) $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS) output.dat

