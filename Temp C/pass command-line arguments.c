
#include <stdio.h>

void ARG(int num, char *args[]) {
    for (int i = 0; i < num; i++) {
        printf("Argument %d: %s\n", i, args[i]);
    }
}

int main(int argc, char *argv[]) {
    ARG(argc, argv);
    return 0;
}
