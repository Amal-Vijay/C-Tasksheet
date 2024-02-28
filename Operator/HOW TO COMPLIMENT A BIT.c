#include <stdio.h>
int complementBit(int num, int pos) {

    int mask = 1 << pos;
    num = num ^ mask;

    return num;
}

int main() {
    int num = 10;
    int pos = 2;
    printf("Original number: %d\n", num);
    num = complementBit(num, pos);
    printf("After complementing bit at position %d: %d\n", pos, num);

    return 0;
}

