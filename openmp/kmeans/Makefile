.RECIPEPREFIX := >
CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRCS = cluster.c getopt.c kmeans.c kmeans_clustering.c
OBJS = $(SRCS:.c=.o)
EXE  = kmeans

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS) output.txt

