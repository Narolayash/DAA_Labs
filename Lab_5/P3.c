// Write a program to implement binary search algorithm using linked list and recursive method. 

#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node* next;
};

struct node* createNode(int x) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));

    if (!newNode) {
        printf("overflow");
        exit(1);
    }

    newNode->val = x;
    newNode->next = NULL;

    return newNode;
}

void insertAtLast(int x, struct node **first) {
    struct node *newNode = createNode(x);

    if(*first == NULL) {
        *first = newNode;
        return;
    }
    
    struct node *save;
    save = *first;
    while (save->next != NULL) {
        save = save->next;
    }
    save->next = newNode;

    printf("Node inserted at the end successfully.\n");
}

void disply(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("null \n");
}

int binarySearch(struct node *head, struct node *end, int target) {
    if (head == end) return 0;

    struct node *slow = head;
    struct node *fast = head;

    while (fast != end && fast->next != end) {
        // slow = slow->next;
        // fast = fast->next->next;
        fast = fast->next;

        if (fast != end) {
            fast = fast->next;
            slow = slow->next;
        }
    }

    if (slow->val == target) return 1;

    if (slow->val < target) return binarySearch(slow->next, end, target);
    
    return binarySearch(head, slow, target);
}

int main() {
    struct node *head = NULL;

    insertAtLast(10, &head);
    insertAtLast(17, &head);
    insertAtLast(25, &head);
    insertAtLast(45, &head);
    insertAtLast(67, &head);
    insertAtLast(91, &head);

    disply(head);
    int target = 95;

    if (binarySearch(head, NULL, target)) {
        printf("Madi gyu bhuii");
    }
    else {
        printf("nathi! yee");
    }
}
