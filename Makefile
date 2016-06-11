all: uravnenie

uravnenie: main.o disc.o
	gcc -o uravnenie disc.o main.o -lm

main.o: main.c
	gcc -c main.c

disc.o: disc.c
	gcc -c disc.c

test: maintest.o disctest.o disc.o
	gcc maintest.o disctest.o disc.o -lm -o test
	./test

maintest.o: maintest.c
	gcc -c maintest.c -o maintest.o

disctest.o: disctest.c
	gcc -c disctest.c -o disctet.o

.PHONY: clean

clean:
	rm -rf *.o uravnenie
	rm -rf *.o test
