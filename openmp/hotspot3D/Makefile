CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRC = 3D.c
OBJ = $(SRC:.c=.o)
EXE = 3D

.RECIPEPREFIX = >

all: $(EXE)

$(EXE): $(OBJ)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJ) output.txt
