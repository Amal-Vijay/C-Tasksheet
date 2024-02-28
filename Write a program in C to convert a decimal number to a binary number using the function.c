#include<stdio.h>
int binary(int n){
    int y=n,i=0,bn[100];
    while(n>0){
      bn[i]= n % 2;
      n/=2;
      i++;
    }
    printf("the binary of %d is:",y);
    for(int j=i-1;j>=0;j--){
        printf("%d",bn[j]);
    }
    printf("\n");
}
int main(){
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
 binary(a);
return 0;
}
