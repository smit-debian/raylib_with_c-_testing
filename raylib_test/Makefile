CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude -Iraylib/include
LDFLAGS = -Lraylib/lib -Wl,-rpath,'$$ORIGIN/raylib/lib'
LDLIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

TARGET = game
SRC = src/main.cpp src/window.cpp

all: $(TARGET)

$(TARGET): $(SRC)
        $(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS) $(LDLIBS)
