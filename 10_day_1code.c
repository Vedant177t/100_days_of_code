#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the three side lengths of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral triangle\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");
        }
    }
    else {
        printf("These side lengths do not form a valid triangle.\n");
    }

    return 0;
}
