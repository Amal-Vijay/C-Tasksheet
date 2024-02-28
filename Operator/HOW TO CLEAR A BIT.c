#include <stdio.h>

int clearBit(int num, int pos) {

    int mask = ~(1 << pos);

    return num & mask;
}

int main() {
    int num, pos;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the position of bit to clear: ");
    scanf("%d", &pos);
    int result = clearBit(num, pos);
    printf("Number after clearing bit at position %d: %d\n", pos, result);

    return 0;
}

