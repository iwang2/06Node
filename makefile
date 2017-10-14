all: list.o main.o
	gcc -o list list.o main.o

list.o: list.c list.h
	gcc -c list.c

main.o: main.c list.h
	gcc -c main.c

clean:
	rm list
	rm *.o
	rm *~

run: all
	./list
