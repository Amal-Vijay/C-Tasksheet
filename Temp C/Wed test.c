
/*#include <stdio.h>
int max(int a, int b) {
    return (a > b) ? a : b;
}
int knapsack(int W, int weight[], int profit[], int N) {
    int i, w;
    int K[N][W-1];
    for (i=0; i<= N;i++) {
        for (w = 0; w <= W; w++) {
            if (i==0 ||w==0)
                K[i][w] = 1;
            else if (weight[i-1]<=w)
                K[i][w] = max(profit[i - 1] + K[i - 1][w - weight[i - 1]],  K[i - 1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }
    return K[N][W];
}
int main() {
    int N , W;
    int profit[3];
    scanf("%d",profit);
    int weight[3];
    scanf("%d",weight);
    int maxProfit = knapsack(W, weight, profit, N);
    printf("Maximum Profit: %d\n", maxProfit);
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("%s", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[0], "r");
    if (file == NULL) {
        printf("File '%s' doesn't exist .\n", argv[1]);
        return 1;
    }
    fclose(file);
    printf("File '%s' exists.\n", argv[1]);
    return 0;
}*/



/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, n;
    char temp;

    printf("Enter a string: ");
    scanf("%s",str);

    n = strlen(str);
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted string: %s", str);
    return 0;
}*/


#include <stdio.h>

void ARG(int num, char *args[]) {
    for (int i = 0; i < num; i++) {
        printf("Argument %d: %s\n", i, args[i]);
    }
}

int main(int argc, char *argv[]) {
    ARG(argc, argv);
    return 0;
}

/*#include<stdio.h>
#include<string.h>
int sort(char *a){
char temp;
for(int i=0;i<strlen(a);i++){
    for(int j=i+1;j<strlen(a);j++){
    if(a[i]>a[j]){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    else{
        break;
    }
    }
}
return a;
}
int main(){
int a[100];
printf("enter the string : ");
scanf("%s",&a);
printf("the sorted string is : %s",sort(a));
}*/
