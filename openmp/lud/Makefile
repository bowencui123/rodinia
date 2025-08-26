.RECIPEPREFIX = >
CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRCS = lud.c lud_omp.c common/common.c
OBJS = $(SRCS:.c=.o)
EXE  = lud

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -Icommon -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS)
