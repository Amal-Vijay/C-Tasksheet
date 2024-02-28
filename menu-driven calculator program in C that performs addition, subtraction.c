//menu-driven calculator program in C that performs addition, subtraction, multiplication, and division using separate functions for each operation.
#include <stdio.h>

float add(float n1, float n2) {
  return n1 + n2;
}

float subtract(float n1, float n2) {
  return n1 - n2;
}

float multiply(float n1, float n2) {
  return n1 * n2;
}

float divide(float n1, float n2) {
  if (n2 == 0) {
    printf("Error: Division by zero is not allowed.\n");
    return -1;
  }
  return n1 / n2;
}

int main() {
  int choice;
  float n1, n2;

  do {
    printf("\nMenu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);
        printf("%.2f + %.2f = %.2f\n", n1, n2, add(n1, n2));
        break;
      case 2:
        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);
        printf("%.2f - %.2f = %.2f\n", n1, n2, subtract(n1, n2));
        break;
      case 3:
        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);
        printf("%.2f * %.2f = %.2f\n", n1, n2, multiply(n1, n2));
        break;
      case 4:
        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);
        if (divide(n1, n2) != -1) {
          printf("%.2f / %.2f = %.2f\n", n1, n2, divide(n1, n2));
        }
        break;
      case 5:
        printf("Exit.\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 5);

  return 0;
}
