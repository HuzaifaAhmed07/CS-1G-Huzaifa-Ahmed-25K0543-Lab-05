#include <stdio.h>

int main() {
    int powerOn;
    char lightColor;

    
    printf("Enter power status (1 for ON, 0 for OFF): ");
    scanf("%d", &powerOn);

    if (powerOn == 1) {
        
        printf("Enter light color (R, Y, G): ");
        scanf(" %c", &lightColor); 

        if (lightColor == 'R' || lightColor == 'r') {
            printf("Action: Stop\n");
        } else if (lightColor == 'Y' || lightColor == 'y') {
            printf("Action: Caution\n");
        } else if (lightColor == 'G' || lightColor == 'g') {
            printf("Action: Go\n");
        } else {
            printf("Invalid light color!\n");
        }
    } 
    else if (powerOn == 0) {
        printf("Signal Off\n");
    } 
    else {
        printf("Invalid power input!\n");
    }

    return 0;
}

