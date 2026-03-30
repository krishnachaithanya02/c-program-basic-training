target: sum.o main.o	
	gcc sum.o main.o 
main.o: main.c	sum.h
	gcc -c main.c -o main.o
sum.o:sum.c sum.h
	gcc -c sum.c -o sum.o
