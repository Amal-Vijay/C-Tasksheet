//display a doubly linked list in reverse order

#include<stdio.h>
#include<stdlib.h>

typedef struct node s;
struct node
{
    struct node* prev;
    int data;
    struct node* next;
} *head = NULL;

s* createnew(int d) {
    s* temp = malloc(sizeof(s));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;
    return temp;
}

void addend(s* head, int d) {
    s* t1 = createnew(d);
    s* t2 = head;
    while (t2->next != NULL) {
        t2 = t2->next;
    }
    t2->next = t1;
    t1->prev = t2;
    return;
}

s* addbeg(s* head, int d) {
    s* t1 = createnew(d);
    t1->prev = NULL;
    t1->next = head;
    head->prev = t1;
    head = t1;
    return head;
}

s* addmid(s* head, int d, int pos) {
    s* p1 = malloc(sizeof(s));
    p1 = createnew(d);
    s* p2 = head;
    pos--;
    if (pos == 0) {
        head = addbeg(head, d);
        return head;
    }
    while (pos) {
        p2 = p2->next;
        pos--;
    }
    p2->prev->next = p1;
    p1->next = p2;
    p1->prev = p2->prev;
    p2->prev = p1;
    return head;
}

int pal(s* head) {
    s* start = head;
    s* end = head;

    while (end->next != NULL) {
        end = end->next;
    }

    while (start != end && start->prev != end) {
        if (start->data != end->data) {
                printf("\nNot a palindrome.\n");
            return 0;
        }
        start = start->next;
        end = end->prev;
        printf("\nThe linked list is a palindrome.\n");
        break;
    }
    return 1;
}

void show(s* head) {
    s* t = head;
    int c = 1;
    while (t != NULL) {
        printf("\n%d - %d - %d", t->prev, t->data, t->next);
        t = t->next;
        c++;
    }
    return;
}

int main() {
    int d;
    head = createnew(4);
    addend(head, 2);
    head = addbeg(head, 2);
    head = addmid(head, 4, 2);
    show(head);
    head = pal(head);
    show(head);
    return 0;
}



