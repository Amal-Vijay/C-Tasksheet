#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    char a;
    int c;
    float e;
    double f;

    printf("\nSize of char variable: %zu bytes\n", sizeof(a));
    printf("Size of int variable: %zu bytes\n", sizeof(c));
    printf("Size of float variable: %zu bytes\n", sizeof(e));
    printf("Size of double variable: %zu bytes\n", sizeof(f));
}

