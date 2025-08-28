.RECIPEPREFIX := >
CXX = g++
CXXFLAGS = -O3
LDFLAGS = -lm

SRCS = srad.cpp
OBJS = $(SRCS:.cpp=.o)
EXE = srad

all: $(EXE)

$(EXE): $(OBJS)
>$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
>$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
>rm -f $(EXE) $(OBJS)

