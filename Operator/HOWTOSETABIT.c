#include <stdio.h>

void setBit(int *num, int position) {
    *num |= (1 << position);
}

int main() {
    int num = 10;

    int position = 2;

    printf("Original number: %d\n", num);

    setBit(&num, position);

    printf("Number after setting bit at position %d: %d\n", position, num);

    return 0;
}
