CXX = g++
CXXFLAGS = -O2
LDFLAGS = -lpthread -lm
TARGET = streamcluster

.PHONY: all clean

all: $(TARGET)

$(TARGET): streamcluster.cpp
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f $(TARGET)

