//print the first n rows of Pascal's Triangle using a function

#include <stdio.h>
void PT(int n) {
    int i, j, coef;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf(" ");

        coef = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Number of rows : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Enter a positive integer.\n");
        return 1;
    }
    PT(n);

    return 0;
}
