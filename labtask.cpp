#include <stdio.h>

int main() {
    int depart, sub;
    
    printf("Enter your department\n");
    printf("1. Engineering\n");
    printf("2. Medical\n");
    scanf("%d", &depart);

    switch(depart) {
        case 1: // Engineering
            printf("You selected Engineering Department.\n");
            printf("Choose your field:\n");
            printf("1. Computer Science\n");
            printf("2. Mechanical Engineering\n");
            scanf("%d", &sub);

            switch(sub) {
                case 1:
                    printf("You selected Computer Science Engineering.\n");
                    printf("Your subjects are\n");
                    printf("1.OOPS\n");
                    break;
                case 2:
                    printf("You selected Mechanical Engineering.\n");
                    printf("Your subjects are\n");
                    printf("1.Analysis\n");
                    break;
                default:
                    printf("Invalid choice in Engineering!\n");
            }
            break;

        case 2: 
            printf("You selected Medical Department.\n");
            printf("Choose your field:\n");
            printf("1. MBBS\n");
            printf("2. BDS\n");
            scanf("%d", &sub);

            switch(sub) {
                case 1:
                    printf("You selected MBBS.\n");
                    printf("Your subjects are\n");
                    printf("1.Anatomy\n");
                    break;
                case 2:
                    printf("You selected BDS.\n");
                    printf("Your subjects are\n");
                    printf("1.Pathology\n");
                    break;
                default:
                    printf("Invalid choice in Medical!\n");
            }
            break;

        default:
            printf("Invalid department! Please select 1 or 2.\n");
    }

    return 0;
}

