CXX = g++
CXXFLAGS = -fPIC -std=c++20 -Wall -Werror -Wextra -pedantic -I.. -I../UserCommon
LDFLAGS = -shared
TARGET = GameManager_318885712_208230862.so
SRC = TankState.cpp GameManager_318885712_208230862_A.cpp $(wildcard ../UserCommon/*.cpp)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
