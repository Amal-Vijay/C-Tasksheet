#include <stdio.h>

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int gcd = GCD(a, b);
    printf("GCD of %d and %d is %d\n", a, b, gcd);

    return 0;
}
