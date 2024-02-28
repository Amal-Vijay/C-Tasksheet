
#include<stdio.h>
#include<stdlib.h>
typedef struct node s;
struct node{
int data;
struct node* link;
};
s* createnew(int d){
   s* h=malloc(sizeof(s));
   h->data=d;
   h->link=NULL;
   return h;
   }
void add(struct node* head,int d){
s* temp=malloc(sizeof(s));
s* ptr=head;
temp->data=d;
 temp->link=NULL;
   while(ptr->link!=NULL){
    ptr=ptr->link;
   }
   ptr->link=temp;
   return;
}
s*add_at_beg(s* head,int d)
{
s* p1=malloc(sizeof(s));
p1->data=d;
p1->link=head;
head=p1;
return p1;
}
void del_pos(s* head,int pos){
    if (pos==1){
        head=del_beg(head);
    return head;
    }
s* p1 =head;
s* p2 =NULL;
pos--;
while(pos){
    p2=p1;
p1=p1->link;
pos--;
}
p2->link=p1->link;
free(p1);
p1=NULL;
return head;
}
s* del(s* head)
/*{
    s* del(s* head)
{
    if (head==NULL)
    {
        printf("list of empty");
        exit(1);
    }
s* temp=head;
head=head->link;
free(temp);
temp = NULL;
}
}*/
void show(s * head){
int c=1;
s* temp=head;
printf("address of first node",head);
while(temp!=NULL){
  printf("%d %d \n",temp->data,temp->link) ;
  temp=temp->link;
  c++;
}
}
int main(){
    int n,i=1;
    printf("Enter no. of nodes: ");
    scanf("%d", &n);
    int d;
printf("enter the value: ");
scanf("%d",&d);
s*head=createnew(d);

head->link=NULL;
  printf("enter the value: ");
scanf("%d",&d);
add(head,d);
i++;
}
while(i<n);
head= add_at_beg(head,100);
show(head);
return 0;
}
