
#include <stdio.h>
#include <stdlib.h>

typedef struct node s;

struct node {
    int data;
    struct node* link;
};

s* add_beg(s* head, int data) {
    s* ptr = malloc(sizeof(s));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;
}

void delete_list(s* head) {
    s* current = head;
    s* next;

    while (current) {
        next = current->link;
        free(current);
        current = next;
    }
}

void print_list(s* head) {
    s* ptr = head;
    while (ptr) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

int main() {
    s* head = NULL;
    int n, data;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    printf("Enter the linked list elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        head = add_beg(head, data);
    }

    printf("Original Linked List: ");
    print_list(head);

        delete_list(head);
        head = NULL;
        printf("Linked list deleted .\n");

    return 0;
}
