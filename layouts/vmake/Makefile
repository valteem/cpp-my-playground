CXX := g++
CXXFLAGS := -g -Wall -Wpedantic
LDFLAGS :=

INCLUDE := -Iinclude

SOURCE_DIR := src
OBJ_DIR := build/obj
OBJFILES := build/obj/main.o build/obj/call.o

.PHONY: all clean

all: build/runnable

build/runnable: $(OBJFILES)
	$(CXX) $(LDFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(CXX) $(INCLUDE) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJFILES) 