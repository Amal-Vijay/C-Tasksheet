#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int*)malloc(5*sizeof(int));
if (ptr=0);
{
return 1;
}
*ptr = 5;
printf("%d",*ptr);
free(ptr);
}
