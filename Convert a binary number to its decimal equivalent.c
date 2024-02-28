//convert a binary number to its decimal equivalent
#include <stdio.h>

int B_To_D(int bn) {            //binaryToDecimal
    int dn = 0, base = 1, remainder;

    while (bn > 0) {
        remainder = bn % 10;
        dn += remainder * base;
        bn /= 10;
        base *= 2;
    }
    return dn;
}

int main() {
    int bn;

    printf("Enter a binary number: ");
    scanf("%d", &bn);

    int dn = B_To_D(bn); //binaryToDecimal

    printf("Decimal equivalent: %d\n", dn);

    return 0;
}
