/*#include<stdio.h>
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
head->data = 45;
head->link = NULL;

s *ptr = malloc(sizeof(s));
ptr->data=98;
ptr->link=NULL;

head->link=ptr;

int data = 3;
head= add_beg(head,data);
ptr=head;
while(ptr !=NULL)
{
    printf("%d ",ptr->data);
    ptr=ptr->link;
}
return 0;
}*/

#include<stdio.h>
#include<stdlib.h>
typedef struct Node s;
struct Node
{
    int data;
    s* link;
};

void sorted(s* *ptr, int new)
{
    s* temp = (s*) malloc(sizeof(s));
    s*current;

    temp->data = new;
    temp->link = NULL;

    if (*ptr == NULL || (*ptr)->data >= temp->data)
    {
        temp->link = *ptr;
        *ptr =temp;
    }
    else
    {
        current = *ptr;
        while (current->link!=NULL && current->link->data < temp->data)
        {
            current = current->link;
        }
        temp->link = current->link;
        current->link =temp;
    }
}

void print(s* node)
{
    while (node!=NULL)
    {
        printf("%d ", node->data);
        node = node->link;
    }
}

int main()
{
    s* head = NULL;
    int n, i, new;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &new);
        sorted(&head, new);
    }

    print(head);

    printf("\nEnter new element to add: ");
    scanf("%d", &new);
    sorted(&head, new);

    printf("\nUpdated list: ");
    print(head);

    return 0;
}


