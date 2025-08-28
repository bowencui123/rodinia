.RECIPEPREFIX = >
CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRCS = b+tree.c \
        kernel/kernel_cpu.c \
        kernel/kernel_cpu_2.c \
        util/timer/timer.c \
        util/num/num.c

OBJS = $(SRCS:.c=.o)
EXE = b+tree

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS) output.txt

