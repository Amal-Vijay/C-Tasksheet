//Write a program in C to check Armstrong and Perfect numbers using the function.
#include <stdio.h>
int power(int base, int exponent) {
  int result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }
  return result;
}

int isArmstrong(int num) {
  int temp = num;
  int sum = 0;
  int digits = 0;

  while (temp > 0) {
    digits++;
    temp /= 10;
  }

  temp = num;
  while (temp > 0) {
    int digit = temp % 10;
    sum += power(digit, digits);
    temp /= 10;
  }

  return (sum == num);
}

int isPerfect(int num) {
  int sum = 0;

  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      sum += i;
    }
  }

  return (sum == num);
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (isArmstrong(number)) {
    printf("%d is an Armstrong number.\n", number);
  } else {
    printf("%d is not an Armstrong number.\n", number);
  }
  if (isPerfect(number)) {
    printf("%d is a perfect number.\n", number);
  } else {
    printf("%d is not a perfect number.\n", number);
  }

  return 0;
}
