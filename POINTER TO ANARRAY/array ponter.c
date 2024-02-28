

#include <stdio.h>
#include <string.h>

void rev(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char Str[] = "Marina Trench";

    printf("Original string: %s\n", Str);

    rev(Str);

    printf("Reversed string: %s\n", Str);

    return 0;
}

