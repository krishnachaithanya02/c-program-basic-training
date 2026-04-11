#include <stdio.h>

enum Status {
    OFF,
    ON
};

struct Device {
    int deviceid;
    enum Status state;
};

int main() {
    struct Device d;

    d.deviceid = 101;
    d.state = ON;

    printf("Device ID: %d\n", d.deviceid);

    if(d.state == ON)
        printf("Status: ON\n");
    else
        printf("Status: OFF\n");

    return 0;
}
