CXX = g++
CXXFLAGS = -O3
LDFLAGS = -lm

SRCS = hotspot.cpp
OBJS = $(SRCS:.cpp=.o)
EXE  = hotspot

all: $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJS) output.txt

