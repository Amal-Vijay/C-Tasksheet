#ifndef SINGLELINKEDLISTS_H_INCLUDED
#define SINGLELINKEDLISTS_H_INCLUDED

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
n* delatbeg(n *head){
    if(head==NULL){
        printf("Empty list.");
        exit(1);
    }
    else{
        n* temp = head;
        head = head->link;
        free(temp);
        temp=NULL;
    }
    return head;
}
void delast(n* head){
    n* temp =head;
    n* temp1 = NULL;
    while(temp->link!=NULL){
        temp1=temp;
        temp = temp->link;
    }
    temp1->link=NULL;
    free(temp);
    temp=NULL;
    return;
}
n* addatmid(n *temp,int i){
    n* t=malloc(sizeof(n));
    t->data=i;
    t->link=temp->link;
    temp->link=t;
    return t;
}
void delatmid(n temp, n temp1){
    temp->link=temp1->link;
    free(temp1);
    temp1=NULL;
    return;
}
void datacheck(n* head,int data){
    n* temp = head;
    int c=1;
    while(temp!=NULL){
        if(temp->data==data){
            printf("The data is present at node%d",c);
            return;
        }
        temp=temp->link;
        c++;
    }
    printf("\nThe data is not present.");
    return;
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
        printf("\n Enter 'y' to add a node in the beginning of the list: ");
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
aa:
            printf("Enter the node position to be added: ");
            int m;
            scanf("%d",&m);
            if(m>a || m<=0){
                printf("\nThe entered position is invalid. Enter a new position.");
                goto aa;
            }
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
    {
        printf("Enter the 'y' to delete the first node: ");
        char y;
        getchar();
        y=getchar();
        if(y=='y'){
            head=delatbeg(head);
            printf("\nDeletion successfully done.");
        }
    }
    {
        printf("Enter the 'y' to delete the last node: ");
        char y;
        getchar();
        y=getchar();
        if(y=='y'){
            delast(head);
            printf("\nDeletion successfully done.");
        }
    }
    {
        char y;
        printf("\nEnter 'y' to delete a node at any position  : ");
        getchar();
        y=getchar();
        if (y=='y'){
qq:
            printf("Enter the node position to be deleted: ");
            int m;
            scanf("%d",&m);
            if(m>c-1 || m<=0){
                printf("\nThe entered position is invalid. Enter a new position.");
                goto qq;
            }
            temp=head;
            n* temp1=temp->link;
            for(int i=1;i<=m;i++){
                if(m==1){
                   head=delatbeg(head);
                }
                if(i==m-1){
                    delatmid(temp,temp1);
                    break;
                }
            temp=temp->link;
            temp1=temp->link;
            }
            printf("\nDeletion successfully done.");
        }
    }
    temp=head;
    c=1;
    printf("\n");
    while(temp!=NULL){
        printf("Node %d data: %d\n",c++,temp->data);
        temp=temp->link;
        }
    printf("Enter 'y' to delete a node again: ");
    char y;
    getchar();
    y=getchar();
    if(y=='y'){
        goto qq;
    }
    else
        printf("\nEnter a data to be checked in the list: ");
    int data;
    scanf("%d",&data);
    datacheck(head,data);
    printf("\nThe program ended successfully.");
    return ;
}

#endif // SINGLELINKEDLISTS_H_INCLUDED
