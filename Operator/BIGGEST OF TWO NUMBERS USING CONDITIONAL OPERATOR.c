#include <stdio.h>
int main() {
    int num1, num2, biggest;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    biggest = (num1 > num2) ? num1 : num2;

    printf("The biggest number is: %d\n", biggest);

    return 0;
}

