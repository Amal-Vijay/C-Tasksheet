// Write a C program to calculate the power of a number using a function. The function should take the base and exponent as parameters.
#include <stdio.h>
int power(int b, int e) {
    int result = 1;

    for (int i = 0; i < e; ++i) {
        result *= b;
    }
    return result;
}
int main() {
    int b; //base
    int e; //exponent

    printf("Enter the base: ");
    scanf("%d", &b);

    printf("Enter the exponent: ");
    scanf("%d", &e);

    int result = power(b, e);
    printf("%.d ^ %d = %d\n", b, e, result);

    return 0;
}
