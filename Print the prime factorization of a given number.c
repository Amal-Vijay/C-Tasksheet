//print the prime factorization of a given number
#include <stdio.h>
void prime(int n) {
  if (n == 1) {
    printf("1");
    return;
  }

  while (n % 2 == 0) {           // even factors
    printf("2 ");
    n /= 2;
  }

  for (int i=3; i*i<=n; i+= 2) {    // Loop through odd numbers up to square root of n
    while (n % i == 0) {
      printf("%d ", i);
      n /= i;
    }
  }


}

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Prime factorization of %d: ", n);
  prime(n);

  return 0;
}




