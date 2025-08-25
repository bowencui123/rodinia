CC      = g++
CFLAGS  = -O3
LDFLAGS = -lm

SRCS = needle.cpp
OBJS = $(SRCS:.cpp=.o)
EXE  = needle

all: $(EXE)

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJS)
