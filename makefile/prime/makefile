file: prime.o main.o
	gcc $^ -o $@
main.o: main.c 
	gcc -c $<
prime.o: prime.c
	gcc -c $<
clean: rm -f * .o $@
