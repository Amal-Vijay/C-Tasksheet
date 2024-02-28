 //Write a program in C to swap two numbers using a function.
/*#include<stdio.h>
int swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
    int a,b;
    printf("Enter the number ");
    scanf("%d",&a);
     printf("Enter the number  ");
      scanf("%d",&b);
swap(&a,&b);
printf("%d and %d ",a,b);
return 0;
}*/
#include<stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: %d and %d\n", a, b);
}

int main() {
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: %d and %d\n", a, b);

    swap(a, b);

    return 0;
}
