// Write a program in C to check if a given number is even or odd using the function.
#include<stdio.h>
int EorO(int a){
if (a%2==0)
printf("The number is even");
else
    printf("The number is odd");
}
int main(){
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
 EorO(a);
return 0;
}
