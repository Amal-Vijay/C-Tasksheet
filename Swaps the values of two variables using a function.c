//swaps the values of two variables using a function.
#include<stdio.h>
void awap(int n1,int n2){
int temp=n1;
n1=n2;
n2=temp;
printf("After swap -> %d %d", n1, n2);
}
int main() {
  int n1,n2;
  printf("Enter a number 1: ");
  scanf("%d", &n1);
  printf("Enter a number 2: ");
  scanf("%d", &n2);

awap(n1,n2);
  return 0;
}
