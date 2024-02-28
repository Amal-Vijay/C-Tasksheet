//Write a C program to find the maximum and minimum of some values using a function that returns an array.
#include <stdio.h>

int* findMaxMin(int arr[], int size) {
    static int result[2];

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    result[0] = max;
    result[1] = min;

    return result;
}

int main() {
    int values[] = {5, 2, 8, 1, 9, 4, 7};
    int* result = findMaxMin(values, sizeof(values) / sizeof(values[0]));
    printf("Maximum value: %d\n", result[0]);
    printf("Minimum value: %d\n", result[1]);

    return 0;
}
