CC=$(CXX)
CPPFLAGS = -Wall #-O3 -funroll-loops

all: test

clean:
	rm -rf *.o test-main

test: test-main
	./test-main

test-main: test-main.o \
           dots-and-boxes.o dots-and-boxes-test.o
