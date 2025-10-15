CXX      = g++
CXXFLAGS = -fPIC -std=c++20 -Wall -Werror -Wextra -pedantic -I.. -I../UserCommon
LDFLAGS  = -shared
TARGET   = Algorithm_318885712_208230862.so
SRC      = TankAlgorithm_318885712_208230862.cpp Player_318885712_208230862.cpp $(wildcard ../UserCommon/*.cpp)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
