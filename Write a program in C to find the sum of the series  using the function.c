//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
 int fact(int n){
     int fact=1,sum=0;
    for (int i=1;i<=n;i++){
    sum+=((fact=fact *i)/i);
    }
    return sum;
 }
 int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
 printf("Enter the series sum of number %d",fact(n));
return 0;
}
