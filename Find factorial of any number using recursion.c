//Find factorial of any number using recursion
#include <stdio.h>


int fact(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fact(n - 1);
  }
}

int main() {
  int n;

  printf("Enter the number: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Factorial not defined for negative numbers.\n");
    return 1;
  }

  int result = fact(n);

  if (result < 0) {
    printf("Overflow! Unable to calculate factorial for %d.\n", n);
    return 1;
  }

  printf("The factorial of %d is: %ld\n", n, result);

  return 0;
}
