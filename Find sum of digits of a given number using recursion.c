//find sum of digits of a given number using recursion.
#include <stdio.h>

int sd(int number) {
  if (number == 0) {
    return 0;
  }

  int ld = number % 10;  //lastDigit
  int rd = number / 10;  //remainingDigits
  return ld + sd(rd);
}

int main() {
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Number must be a positive integer.\n");
    return 1;
  }

  int digitSum = sd(number);   //sumOfDigits
  printf("The sum of digits in %d is: %d\n", number, digitSum);

  return 0;
}
