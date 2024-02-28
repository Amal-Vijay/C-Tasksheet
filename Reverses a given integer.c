//Implement a C program that reverses a given integer using a function.
#include <stdio.h>

int rev(int n) {
  int rev_no = 0;
  while (n != 0) {
    int remainder = n % 10;
    rev_no = rev_no * 10 + remainder;
    n /= 10;
  }
  return rev_no;
}

int main() {
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);

  int rev_no = rev(num);

  printf("The reversed number is: %d", rev_no);

  return 0;
}
