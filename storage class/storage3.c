#include <stdio.h>

void main() {
    
    int stack_var = 5;          // Local variable (Stack segment)
    
    static int static_var = 10; // Static variable (Data segment)

    printf("Address of Stack Variable:  %p\n", (void*)&stack_var);
    
    printf("Address of Static Variable: %p\n", (void*)&static_var);

}
