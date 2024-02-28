/*#include<stdio.h>
void add(int a[3][3],int b[3][3]){
    int result[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}



int main(){
    int a[3][3];
    int c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("Enter the value of the matrix a %d: ",++c);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

  for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int b[3][3];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("Enter the value of the matrix b %d: ",++k);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");

  for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

   int result[3][3];
   add(a,b);
   printf("\nThe resultant matrix\n");
*/


#include <stdio.h>
int main() {
    int arr[2][2][2] = {{{1, 2},{3, 4}},{{5, 6},{7, 8}}};
    printf("3D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr[ i ][ j ][ k ]);
 }
printf("\n");
}    printf("\n");
 }
    return 0;
}


