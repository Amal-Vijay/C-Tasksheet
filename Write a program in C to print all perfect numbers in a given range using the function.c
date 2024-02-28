//Write a program in C to print all perfect numbers in a given range using the function.
#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}
void PerfectNumbers(int start, int end) {
    printf("Perfect numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    if (start < 1 || end < start) {
        printf("Invalid range\n");
        return 1;
    }
    PerfectNumbers(start, end);
    return 0;
}

