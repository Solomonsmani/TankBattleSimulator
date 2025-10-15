CXX = g++
CXXFLAGS = -std=c++20 -g -Wall -Werror -Wextra -pedantic -rdynamic -pthread -I.. -I../UserCommon
LDFLAGS = -ldl -fsanitize=address
TARGET = simulator_318885712_208230862
SRC = AlgorithmRegistrar.cpp \
      GameManagerRegistrar.cpp \
      GameManagerRegistration.cpp \
      PlayerRegistration.cpp \
      Simulator.cpp \
      TankAlgorithmRegistration.cpp \
      simulator_318885712_208230862.cpp \
      $(wildcard ../UserCommon/*.cpp)

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET)
