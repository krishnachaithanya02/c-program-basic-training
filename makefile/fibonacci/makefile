target: fib.o main.o 
	gcc $^ -o $@
main.o: main.c 
	gcc -c $<
fib.o: fib.c
	gcc -c $<
clean: rm -f * .o $@	
