.RECIPEPREFIX := >
CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRCS = srad.c
OBJS = $(SRCS:.c=.o)
EXE = srad

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS)
