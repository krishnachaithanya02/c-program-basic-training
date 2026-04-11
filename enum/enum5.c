#include <stdio.h>

enum ErrorCode {
    SUCCESS = 0,
    ERROR = 1,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

struct Error {
    int code;
    char message[30];
};

int main() {

    struct Error e[] = {
        {SUCCESS, "Success"},
        {ERROR, "General Error"},
        {NOT_FOUND, "Not Found"},
        {SERVER_ERROR, "Server Error"}
    };

    int input = 404;   

    for(int i = 0; i < 4; i++) {
        if(e[i].code == input) {
            printf("Error %d: %s\n", e[i].code, e[i].message);
        }
    }

    return 0;
}
