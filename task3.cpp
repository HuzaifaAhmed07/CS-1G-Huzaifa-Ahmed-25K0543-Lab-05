#include <stdio.h>

int main() {
    float a, b, c, discriminant;

    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

   
    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        printf("Two real roots\n");
    }
    else if (discriminant == 0) {
        printf("One real root\n");
    }
    else {
        printf("Imaginary roots\n");
    }

    return 0;
}

