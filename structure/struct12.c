#include <stdio.h>

struct Engine {
    int horsepower;
    float capacity;  
};

struct Car {
    char model[50];
    int year;
    struct Engine eng; 
};

int main() {
    struct Car c;

   
    printf("Enter model ");
    scanf("%s", c.model);
    printf("enter year");
    scanf("%d",&c.year);
    printf("enter horsepower");
    scanf("%d",&c.eng.horsepower);
    printf("engine capacity");
    scanf("%f",&c.eng.capacity);

    printf("\nCar Details:\n");
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);
    printf("Horsepower: %d\n", c.eng.horsepower);
    printf("Engine Capacity: %.2f L\n", c.eng.capacity);

    return 0;
}

