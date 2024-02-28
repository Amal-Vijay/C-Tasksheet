#include<stdio.h>
#include<stdlib.h>
typedef struct node s;
struct node{
int data;
struct node* link;
};
s* add_beg(s* head,int d)                //head recives address of 1st node & d recives the data 3
{
    s* ptr = malloc(sizeof(s));
    ptr->data=d;
    ptr->link=NULL;

    ptr->link=head;                      // the link part will get updated based on address of 1st node
    head=ptr;                            // 1st head will then point towards the new node
    return head;
}
int main(){
s *head = malloc(sizeof(s));              //Given Node
head->data = 45;
head->link = NULL;

s *ptr = malloc(sizeof(s));               //Node needed to be added at begening
ptr->data=98;
ptr->link=NULL;

head->link=ptr;                         //update 1st head link as ptr

int data = 3;
head= add_beg(head,data);
ptr=head;
while(ptr !=NULL)
{
    printf("%d ",ptr->data);
    ptr=ptr->link;
}
return 0;
}
