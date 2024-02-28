//Write a C program to generate nth Fibonacci term using recursion.
#include <stdio.h>

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

int main() {
  int n;

  printf("Enter the nth term: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("Invalid input! Enter a positive integer.\n");
    return 1;
  }

  int fib_nth = fibonacci(n);
  printf("The %dth Fibonacci term is: %d\n", n, fib_nth);

  return 0;
}
