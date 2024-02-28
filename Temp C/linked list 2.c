
#include<stdio.h>
#include<stdlib.h>
typedef struct node s;
struct node{
int data;
struct node* link;
};
void add(struct node* head,int d){
s* temp =malloc(sizeof(s));
temp->data=d;
temp->link=NULL;
head->link=temp;
return;
}
int main(){
s* head =malloc(sizeof(s));
head->data=10;
head->link=NULL;
int d;
printf("Enter value");
scanf("%d",&d);
add(head,20);
printf("%d %d",head,head->link->data);
}
