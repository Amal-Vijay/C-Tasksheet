//print Floyd's Triangle up to a specified number of rows
#include<stdio.h>
int PF(int n){
int i,j,num=1;
for (i=0;i<=n;i++){
    for(j=0;j<=i;j++){
        printf(" %d",num);
        num++;
    }
    printf("\n");
}
}
int main() {
    int n;

    printf("Number of rows : ");
    scanf("%d", &n);
    PF(n);

    return 0;
}
