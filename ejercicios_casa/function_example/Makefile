TARGET = function-example

CXX = g++
CXXFLAGS = -std=c++17

SRCS = function-example.cc

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

