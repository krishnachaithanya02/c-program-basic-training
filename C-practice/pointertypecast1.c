int main() {
    // 1. Explicitly cast the hex literal to an integer pointer
    int *p = (int *)0x10000; 
    
    // 2. Use %p to print pointers, or cast the result back to an unsigned long if using %x
    printf("%p \n", (void*)(p + 3)); 
   return 0;
}
