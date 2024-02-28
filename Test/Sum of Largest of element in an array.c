#include <stdio.h>
int A(int arr[], int s) {
  int sum=0;
  for (int i=0; i<s; i++) {
    sum+= *(arr+i);
  }
  return sum;
}
int main() {
  int arr[100];
  int s;
  printf("Array size: ");
  scanf("%d", &s);
  for (int i=0; i<s; i++) {
    printf("Enter element %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  int sum= A(arr,s);
  printf("Sum of all elements : %d", sum);
  return 0;
}
