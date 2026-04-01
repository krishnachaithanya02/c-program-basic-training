target: student.o main.o 
	gcc $^ -o $@
main.o: main.c 
	gcc -c $< 
student.o: student.c
	gcc -c $<
clean: rm -f * .o target
