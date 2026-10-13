// ...existing code...

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;
    double realPart, imagPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation because a = 0.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Discriminant is positive.\n");
        printf("Roots are real and distinct.\n");
        printf("x1 = %.2lf\n", root1);
        printf("x2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);

        printf("Discriminant is zero.\n");
        printf("Roots are real and equal.\n");
        printf("x1 = x2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);

        printf("Discriminant is negative.\n");
        printf("Roots are complex conjugates.\n");
        printf("x1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("x2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}