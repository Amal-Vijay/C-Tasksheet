//Find reverse of any number using recursion
#include <stdio.h>
int rev(int n) {
  if (n == 0) {
    return 0;
  }
  int digit = n % 10;
  n/=10;

  return digit*(10, rev(n)) + rev(n);
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("The reverse of %d is: %d\n", n, rev(n));
  return 0;
}
