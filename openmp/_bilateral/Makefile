.RECIPEPREFIX := >
CC = g++
CFLAGS = -O3
LDFLAGS = -lm

SRCS = bilateral.cpp bilateralFilter_cpu.cpp bmploader.cpp
OBJS = $(SRCS:.cpp=.o)
EXE  = bilateral

.PHONY: all clean
all: $(EXE)

$(EXE): $(OBJS)
> $(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
> $(CC) $(CFLAGS) -c $< -o $@

clean:
> $(RM) $(EXE) $(OBJS) output.dat
