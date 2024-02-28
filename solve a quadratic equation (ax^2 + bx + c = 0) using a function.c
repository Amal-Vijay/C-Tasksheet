//solve a quadratic equation (ax^2 + bx + c = 0) using a function.Handle cases for real and complex roots
#include <stdio.h>

void Quadratic(double a, double b, double c) {
    double discriminant, root1, root2;

    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {

        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {

        root1 = root2 = -b / (2*a);
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {

        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);

        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    printf("Enter coefficient a: ");
    scanf("%lf", &a);

    printf("Enter coefficient b: ");
    scanf("%lf", &b);

    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    Quadratic(a, b, c);

    return 0;
}
