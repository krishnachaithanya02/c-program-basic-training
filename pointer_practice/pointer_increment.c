#include <stdio.h>

void ARRAY_INC(int *arr);

int main() {

int arr[5]={1,2,3,4,5};

printf("original array");

for(int i=0;i<5;i++){
printf("%d",*(arr + i));
}

printf("\n");


ARRAY_INC(arr);
printf("incremented array");

for(int i=0;i<5;i++){

printf("%d",*(arr + i));

}
printf("\n");
return 0;
}

void ARRAY_INC(int *arr) {

for(int i = 0; i <5; i++) {

        *(arr + i) = *(arr + i) + 1;
    }
}
