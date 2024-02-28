#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[8];
    int *ptr=NULL;
    ptr=calloc(4,sizeof(int));
    if(ptr==NULL){
        printf("Memory is not allocated");
        exit(1);
    }
    printf("%d\n",*ptr);
    //ptr=a;
    for(int i=0;i<4;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<4;i++){
        printf("Data stored in heap is %d\n",*(ptr+i));
    }
    printf("Enter four elements: ");
    int newSize=32;
    ptr=realloc(ptr,newSize);
    for(int i=4;i<8;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<8;i++){
        printf("Data stored in heap is %d\n",*(ptr+i));
    }
    free(ptr);
    ptr=NULL;
    if(ptr==NULL)
        printf("Memory deallocated successfully\n");
    else
        printf("Memory not deallocated\n");
}
