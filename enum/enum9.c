#include <stdio.h>

enum Unit { TEMP, PRESSURE, HUMIDITY };

struct Sensor {
    float value;
    enum Unit unit;
};

void printSensor(struct Sensor s) {
    printf("Sensor Value: %.2f\n", s.value);
    printf("Unit: ");
    switch(s.unit) {
        case TEMP: printf("Temperature\n"); break;
        case PRESSURE: printf("Pressure\n"); break;
        case HUMIDITY: printf("Humidity\n"); break;
    }
}

int main() {
    struct Sensor s1;
    s1.value = 36.5;
    s1.unit = TEMP;

    struct Sensor s2;
    s2.value = 101.3;
    s2.unit = PRESSURE;

    printSensor(s1);
    printSensor(s2);

    return 0;
}
