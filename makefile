CXX = g++
CXXFLAGS = -std=c++11 -Wall -O3
SRC = source/main.cpp source/app.cpp source/person.cpp source/address.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = jsonProgram

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
