.RECIPEPREFIX = >
CC=g++
CFLAGS=-O3
LDFLAGS=-lm

SRCS=bfs.cpp
OBJS=$(SRCS:.cpp=.o)
EXE=bfs

all: $(EXE)

$(EXE): $(OBJS)
>$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
>$(CC) $(CFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS) output.txt
