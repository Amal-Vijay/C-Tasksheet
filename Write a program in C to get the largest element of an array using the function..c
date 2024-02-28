//Write a program in C to get the largest element of an array using the function.
#include <stdio.h>

int largest(int arr[], int size) {
  int largest = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  return largest;
}

int main() {
  int arr[20];
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  for (int i = 0; i < size; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("The largest element in the array is: %d\n", largest(arr, size));

  return 0;
}
