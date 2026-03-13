target: fact.o main.o
	gcc fact.o main.o -o $^ 
main.o: main.c fact.h
	gcc -c $<
fact.o: fact.c fact.h
	gcc -c $<

