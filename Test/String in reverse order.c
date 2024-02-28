#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    char *p1,*p2;
    printf("Enter the string: ");
    gets(a);
    p1=a+strlen(a)-1;
    p2=b;
    while(p1>=a){
        *p2 = *p1;
        p2++;
        p1--;
        }
    printf("Reverse string is %s",b);
}
