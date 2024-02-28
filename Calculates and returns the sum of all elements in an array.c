//calculates and returns the sum of all elements in an array
#include<stdio.h>
void sum(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){
sum+=arr[i];
}
printf("sum of all elements in array is: %d\n",sum);
}
int main() {
    int i,n;
    printf("Enter the no.of Elements : ");
    scanf("%d", &n);
    int arr[n];
for(i=0;i<n;i++){
    printf("Enter an Element %d: ",i+1);
    scanf("%d", &arr[i]);
}
sum(arr,n);
    return 0;
}
