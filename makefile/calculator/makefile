targ: calcul.o main.o
	gcc $^ -o $@
main.o: main.c
	gcc -c $<
calcul.o: calcul.c
	gcc -c $<
clean: 
	rm -f *.o targ

