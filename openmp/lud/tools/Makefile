.RECIPEPREFIX = >
CC = gcc
CFLAGS = -O3

SRCS = gen_input.c
OBJS = $(SRCS:.c=.o)
EXE  = gen_input

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS)
