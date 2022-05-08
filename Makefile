CXX?=g++ 
CXXFLAGS+= --std=c++17 -O3 -Wall -Wextra -I.
SOURCES=src/main.cpp src/rect.cpp

src/%.o: src/%.cpp 
    $(CXX) $(CXXFLAGS) -c -o $@ $<

overload: $(SOURCES:.cpp=.o)
    $(CXX) $(CXXFLAGS) -o $@ $^
    rm -f src/*.o    

clean:
    rm -f src/*.o