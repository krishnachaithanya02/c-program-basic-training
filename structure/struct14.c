#include <stdio.h>

struct Customer {
    char name[50];
};

struct Bank {
    int acc_no;
    float balance;
    struct Customer c;
};

void deposit(struct Bank *b, float amt) {
    b->balance += amt;
}

void withdraw(struct Bank *b, float amt) {
    if (amt <= b->balance)
        b->balance -= amt;
    else
        printf("Insufficient balance\n");
}

void display(struct Bank *b) {
    printf("\nName: %s\n", b->c.name);
    printf("Account No: %d\n", b->acc_no);
    printf("Balance: %.2f\n", b->balance);
}

int main() {
    struct Bank b;
    int choice;
    float amt;

    printf("Enter Name: ");
    scanf("%s", b.c.name);

    printf("Enter Account Number: ");
    scanf("%d", &b.acc_no);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    do {
        printf("\n1.Deposit 2.Withdraw 3.Display 4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amt);
                deposit(&b, amt);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amt);
                withdraw(&b, amt);
                break;

            case 3:
                display(&b);
                break;
        }

    } while(choice != 4);

    return 0;
}
