.RECIPEPREFIX := >
CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRCS = particle_filter.c
OBJS = $(SRCS:.c=.o)
EXE = particle_filter

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS) output.txt

