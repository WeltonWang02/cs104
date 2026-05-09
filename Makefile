CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = calc

OBJS = main.o mathfuncs.o randfuncs.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp mathfuncs.h randfuncs.h
	$(CXX) $(CXXFLAGS) -c main.cpp

mathfuncs.o: mathfuncs.cpp mathfuncs.h
	$(CXX) $(CXXFLAGS) -c mathfuncs.cpp

randfuncs.o: randfuncs.cpp randfuncs.h
	$(CXX) $(CXXFLAGS) -c randfuncs.cpp

clean:
	rm -f *.o

.PHONY: all clean