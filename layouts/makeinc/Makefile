CC = g++
CFLAGS = -std=c++17 -g
INCLUDE = include

bin/simple: temp/main.o temp/simple.o temp/mult.o
	@mkdir -p bin
	$(CC) temp/*.o -o bin/simple $(CFLAGS)

temp/main.o: src/main.cpp src/simple.hpp include/mult.hpp
	@mkdir -p temp
# include path must be explicitly specified for header files in folders other than source file(s)
	$(CC) -c src/main.cpp -I${INCLUDE} -o temp/main.o $(CFLAGS)

temp/simple.o: src/simple.cpp
	@mkdir -p temp
# don't need to specify include path for header files in same folder
	$(CC) -c src/simple.cpp -o temp/simple.o $(CFLAGS)

temp/mult.o: src/mult.cpp include/mult.hpp
	@mkdir -p temp
	$(CC) -c src/mult.cpp -o temp/mult.o $(CFLAGS)

.PHONY: clean
clean:
	rm -rf temp bin
