all: uravnenie

uravnenie: main.o disc.o
	gcc -o uravnenie disc.o main.o

main.o: main.c
	gcc -c main.c

disc.o: disc.c
	gcc -c disc.c
