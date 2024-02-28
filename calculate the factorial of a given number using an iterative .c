//calculate the factorial of a given number using an iterative function instead of recursion.
#include <stdio.h>

int facto(int n) {
int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

    int result = facto(number);
    printf("The factorial of %d is %d\n", number, result);

  return 0;
}
