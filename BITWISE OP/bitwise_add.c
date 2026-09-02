#include  <stdio.h>

void main() {

int x,y,z;


while (y != 0) {
        z = x & y;  // Find carry
        x = x ^ y;  // Add without carry
        y = z << 1; // Shift carry to the left
    }


printf("%d",x);

}


