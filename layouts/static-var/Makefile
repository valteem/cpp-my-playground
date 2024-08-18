CC = g++
CFLAGS = -std=c++17 -g
INCLUDE = include

build/static-var: build/main.o build/unit1.o build/unit2.o
	@mkdir -p build
	@$(CC) build/*.o -o build/static-var $(CFLAGS)

build/main.o: src/main.cc include/unit1.h include/unit2.h
	@mkdir -p build
	@$(CC) -c src/main.cc -I${INCLUDE} -o build/main.o $(CFLAGS)

build/unit1.o: src/unit1.cc
	@mkdir -p build
	@$(CC) -c src/unit1.cc -o build/unit1.o $(CFLAGS)

build/unit2.o: src/unit2.cc
	@mkdir -p build
	@$(CC) -c src/unit2.cc -o build/unit2.o $(CFLAGS)

.PHONY: clean
clean:
	rm -rf build