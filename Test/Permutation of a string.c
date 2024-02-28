#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
    char temp= *a;
    *a=*b;
    *b=temp;
}
void p(char *str,int l,int r){
    if(l==r){
        printf("\n%s",str);
    }else{
        for(int i=l;i<=r;i++){
            swap(str+l,str+i);
            p(str,l+1,r);
            swap(str+l,str+i);
        }}}
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Reversed String : ");
    p(str,0,strlen(str)-1);
}

