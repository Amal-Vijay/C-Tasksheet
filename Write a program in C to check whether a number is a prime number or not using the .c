// Write a program in C to check whether a number is a prime number or not using the function.
#include<stdio.h>
 int prime(int n){
     int i,count=0;
    for (int i=1;i<=n;i++){
    if (n%i==0){
        count++;
    }
    }
    if(count==2)
        printf("%d is a prime no.",n);
    else
        printf("%d is not a prime no.",n);
 }
 int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
 prime(n);
return 0;
}
