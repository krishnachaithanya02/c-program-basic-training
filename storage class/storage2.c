#include <stdio.h>
 

static int shared; 

void function_A() {
    
    shared = 50;      
    printf("Function A box value: %d\n", shared);
    
}

void function_B() {
    
    shared = 100;
    
    printf("Function B box value: %d\n", shared);

}

void main() {

    function_A(); 

    function_B(); 
}
