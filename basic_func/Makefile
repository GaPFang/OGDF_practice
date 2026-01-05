# Compiler
CXX = clang++
CXXFLAGS = -std=c++17 -O2 -Wall -I/home/b11901003/ogdf/include \
           -I/home/b11901003/ogdf/build/include/ogdf-release
LDFLAGS = -L/home/b11901003/ogdf/build -lOGDF -pthread

# Targets
TARGETS = 1 2 3

# Default target
all: $(TARGETS)

# Rules for each target
1: 1_random_graph.cpp
	$(CXX) $(CXXFLAGS) 1_random_graph.cpp -o 1_random_graph $(LDFLAGS)

2: 2_manual_creation.cpp
	$(CXX) $(CXXFLAGS) 2_manual_creation.cpp -o 2_manual_creation $(LDFLAGS)

3: 3_planar.cpp
	$(CXX) $(CXXFLAGS) 3_planar.cpp -o 3_planar $(LDFLAGS)

# Clean rule
clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean
