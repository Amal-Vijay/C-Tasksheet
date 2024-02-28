//check if a given year is a leap year.
#include<stdio.h>
void year(int y){
if (y%4==0 || y%400==0)
    printf("%d is a leap year", y);
else if ( y%100!=0)
    printf("%d is not a leap year", y);
}
int main() {
    int y;

    printf("Enter a Year: ");
    scanf("%d", &y);

    year(y);
    return 0;
}
