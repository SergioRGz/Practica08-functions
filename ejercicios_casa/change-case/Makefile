CXX = g++
CXXFLAGS = -std=c++17
TARGET = change-case
SRC = main_program.cc change-case.cc
OBJ = $(SRC:.cc=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
