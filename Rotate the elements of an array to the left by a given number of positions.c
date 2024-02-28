//Rotate the elements of an array to the left by a given number of positions
#include <stdio.h>

void RL(int arr[], int size, int nR) {          //rotateLeft,numRotations

  if (nR < 0) {                           // Handle negative rotations
    nR = size + nR;
  }

  if (nR == 0 || nR == size) {   // Check for unnecessary rotations
    return;
  }

  int temp;                                           // Temporary variable to store the element

  for (int i = 0; i < nR; i++) {
    temp = arr[0];
    for (int j = 0; j < size - 1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[size - 1] = temp;
  }
}

int main() {
  int size;
  int nR;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the array elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Enter the number of rotations: ");
  scanf("%d", &nR);

  RL(arr, size, nR);        // Rotate the array and print the original and rotated versions
  printf("Original array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("Rotated array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
