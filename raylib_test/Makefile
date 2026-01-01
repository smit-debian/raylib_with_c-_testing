CXX = g++
CXXFLAGS = -Iraylib/include
LDFLAGS = -Lraylib/lib -Wl,-rpath,'$$ORIGIN/raylib/lib'
LDLIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

TARGET = game
SRC = src/main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(SRC) $(CXXFLAGS) $(LDFLAGS) $(LDLIBS) -o $(TARGET)
