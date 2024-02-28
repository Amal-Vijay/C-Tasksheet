#include<stdio.h>
int main(){
    int c=0;
    char a[50];
    printf("Enter String: ");
    scanf("%[^\n]",a);
    char *p=a;
    while(*p!='\0'){
        c++;
        p++;}
    printf("String Length = %d",c);
}
