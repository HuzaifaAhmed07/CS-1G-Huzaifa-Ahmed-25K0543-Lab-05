#include <stdio.h>

int main() {
    int id, pass;

   
    int correctid = 123;   
    int correctpass = 456;   

    
    printf("Enter 3 digit UserId: ");
    scanf("%d", &id);

    if (id == correctid) {
   
        printf("Enter Password: ");
        scanf("%d", &pass);

        if (pass == correctpass) {
            printf("Login successful!\n");
        } else {
            printf("Incorrect password\n");
        }
    } else {
        printf("Username not found\n");
    }

    return 0;
}

