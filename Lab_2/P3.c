// Write a program to implement singly linked list operations (INSERT, DELETE, DISPLAY) 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

struct node* createNewNode(int val) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if (!newNode) {
        printf("Fail to create a new node\n");
        return NULL;
    }

    newNode->val = val;
    newNode->next = NULL;

    return newNode;
}

void insertLast (struct node** head, int val) {
    struct node* newNode = createNewNode(val);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct node* save = *head;
    while (save->next != NULL) {
        save = save->next;
    }

    save->next = newNode;
}

void insertFirst (struct node** head, int val) {
    struct node* newNode = createNewNode(val);

    newNode->next = *head;
    *head = newNode;
}

int deleteFirst (struct node** head) {
    if (*head == NULL) return -1;

    struct node* temp = *head;
    int val = temp->val;
    *head = temp->next;
    free(temp);

    return val;
}

int deleteLast (struct node** head) {
    if (*head == NULL) return -1;
    
    // only one node
    if ((*head)->next == NULL) {
        int val = (*head)->val;
        free(*head);
        *head = NULL;
        return val;
    }

    struct node* save = *head;
    struct node* pre = NULL;

    while (save->next != NULL) {
        pre = save;
        save = save->next;
    }

    int val = save->val;

    pre->next = NULL;
    free(save);

    return val;
}

void display (struct node* head) {
    if (head == NULL) {
        printf("NULL\n");
        return;
    }

    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }

    printf("NULL\n");
}

int main() {
    struct node* head = NULL;

    insertLast(&head, 10);
    insertLast(&head, 20);
    insertFirst(&head, 5);

    display(head);

    printf("Deleted First = %d\n", deleteFirst(&head));
    display(head);

    printf("Deleted Last = %d\n", deleteLast(&head));
    display(head);

    return 0;
}
