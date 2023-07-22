INCLUDE = include
CFLAGS = -c -g -Wall -Wpedantic
FILES = main.cpp message.cpp
OBJFILES = main.o message.o
BUILD = build
SOURCE = src

all: build/main

build/main.o: src/main.cpp
	g++ -I$(INCLUDE) $(CFLAGS) -o build/main.o src/main.cpp
	@echo("main.o")

build/message.o: src/message.cpp
	g++ -I$(INCLUDE) $(CFLAGS) -o build/message.o src/message.cpp
	@echo(message.o)

build/main: build/main.o build/message.o
	cd build && \
	g++ $(OBJFILES) -o main