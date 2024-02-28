//string as input and counts the frequency of each character.(how much a charecter is repeating)
#include <stdio.h>
#include <string.h>

void count(char str[], int f[]) {

  for (int i = 0; i < 200; i++) {
    f[i] = 0;
  }
  int length = strlen(str);
  for (int i = 0; i < length; i++) {

    f[(int)str[i]]++;
  }
}

int main() {
  char a[100];   //input_string
  int f[200];   //frequencies

  printf("Enter a string: \n");
  fgets(a, sizeof(a), stdin);

  for (int i = 0; i < strlen(a); i++) {
    if (a[i] == '\n') {
      a[i] = '\0';
      break;
    }
  }
  count(a, f);

  printf("Character frequencies:\n");
  for (int i = 0; i < 200; i++) {
    if (f[i] > 0) {
      printf("'%c': %d\n", (char)i, f[i]);
    }
  }

  return 0;
}
