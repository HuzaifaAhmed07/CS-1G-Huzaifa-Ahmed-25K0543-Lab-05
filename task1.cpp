#include <stdio.h>

int main() {
    int age;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age < 5) {
        printf("Ticket Price: Free\n");
    } else if (age >= 65) {
        printf("Ticket Price: Discount\n");
    } else {
        printf("Ticket Price: Standard\n");
    }

    return 0;
}

