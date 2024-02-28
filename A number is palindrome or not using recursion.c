//A number is palindrome or not using recursion.
#include <stdio.h>
    int sum;
    int Pal(int n){
    if (n/10==0){
      return sum*10+n%10;}
    sum=sum*10+n%10;
      return Pal(n/10);

}

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (Pal(n)==n) {
    printf("%d is a palindrome\n", n);
  }
  else {
    printf("%d is not a palindrome\n", n);
  }

  return 0;
}
