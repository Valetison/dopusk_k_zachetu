uravnenie: main.o disc.o
	gcc -o uravnenie disc.o main.o -lm

main.o: main.c
	gcc -c main.c

disc.o: disc.c
	gcc -c disc.c

.PHONY: clean

clean:
	rm -rf *.o uravnenie
