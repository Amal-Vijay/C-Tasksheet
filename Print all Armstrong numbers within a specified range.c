//Print all Armstrong numbers within a specified range
#include<stdio.h>
int Arm(int num) {
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
    sum += Arm(digit);
    temp /= 10;
  }

  return (sum == num);
}
int main() {
    int start, end,num;
    printf("Enter the range : ");
    scanf("%d %d", &start, &end);

    Arm(num);
    return 0;
}
