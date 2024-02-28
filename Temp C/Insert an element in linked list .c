#include<stdio.h>
#include<stdlib.h>
typedef struct node s;
struct node{
int data;
struct node* link;
};
s* add_beg(s* head,int d)
{
    s* ptr = malloc(sizeof(s));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;
    head=ptr;
    return head;
}
int main(){
s *head = malloc(sizeof(s));
scanf("%d",head->data);

head->link = NULL;

s *ptr = malloc(sizeof(s));
scanf("%d",ptr->data);
ptr->link=NULL;

head->link=ptr;
int data ;
scanf("%d",data);
head= add_beg(head,data);
ptr=head;
while(ptr !=NULL)
{
    printf("%d ",ptr->data);
    ptr=ptr->link;
}
return 0;
}
