#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*link;
}n;
n* addatend(n *temp,int i,int a){
    scanf("%d",&temp->data);
     if(i==a-1){
            temp->link=NULL;
            return temp;
        }
    temp->link=malloc(sizeof(n));
    temp=temp->link;
    return temp;
}
n* addatbeg(n *temp,int i){
n* t=malloc(sizeof(n));
t->data=i;
t->link=temp;
return t;
}
n* addatmid(n *temp,int i){
n* t=malloc(sizeof(n));
t->data=i;
t->link=temp->link;
temp->link=t;
return t;
}
void crt_node(int a){
    n *head=malloc(sizeof(n));
    if(head==NULL){
        printf("Memory not allocated");
        exit(1);
    }
    n *temp=head;
    for(int i=0;i<a;i++){
        printf("Enter the data for node %d: ",i+1);
        temp=addatend(temp,i,a);
    }
    {
    printf("\n Enter 'y' to add a node in the list beginning: ");
    char y;
    getchar();
    y=getchar();
    if(y=='y'){
    ss: printf("\nEnter the data for the new node: ");
    int d;
    scanf("%d",&d);
    head=addatbeg(head,d);
    }
    }
    {
        char y;
        printf("\nEnter 'y' to add one more node in the beginning: ");
        getchar();
        y=getchar();
        if (y=='y'){
            goto ss;
        }
    }
    {
    char y;
    printf("\nEnter 'y' to add a node in between nodes: ");
    getchar();
    y=getchar();
    if (y=='y'){
    printf("Enter the node position to be added: ");
    int m;
    scanf("%d",&m);
    temp=head;
    for(int i=1;i<=m;i++){
        if(i==m){
            int d;
            printf("\nEnter the data for the new node: ");
            scanf("%d",&d);
            temp=addatmid(temp,d);
            break;
        }
        temp=temp->link;
    }
    }
    }
    temp=head;
    int c=1;
    printf("\n");
    while(temp!=NULL){
        printf("Node %d data: %d\n",c++,temp->data);
    temp=temp->link;
    }
    return ;
}
int main(){
    int a;
    printf("Number of Nodes: ");
    scanf("%d",&a);
    crt_node(a);
}
