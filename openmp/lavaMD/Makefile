CC = gcc
CFLAGS = -O3
LDFLAGS = -lm

SRCS = lavaMD.c kernel/kernel_cpu.c util/num/num.c util/timer/timer.c
OBJS = $(SRCS:.c=.o)
EXE = lavaMD

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJS) output.txt
