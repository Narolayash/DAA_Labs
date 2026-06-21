// Write a program to implement queue operations (INSERT, DELETE, DISPLAY) 

#include <stdio.h>

void insert (int* queue, int size, int* front, int* rear, int val) {
    if (*rear >= size-1) return;
    queue[++(*rear)] = val;
    if (*front == -1)
        *front = 0;
}

int delete (int* queue, int* front, int* rear) {
    if (*front == -1) return -1;

    int val = queue[*front];

    if (*front == *rear) *front = *rear = -1;
    else (*front)++;

    return val;
}

void display(int* queue, int front, int rear) {
    if (front == -1) {
        printf("\nEmpty\n");
        return;
    }

    for (int i=front; i<=rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main () {
    int queue[100];
    int front = -1, rear = -1;
    int size = 100;

    insert(queue, size, &front, &rear, 10);
    insert(queue, size, &front, &rear, 20);
    insert(queue, size, &front, &rear, 30);

    display(queue, front, rear);

    printf("Deleted = %d\n", delete(queue, &front, &rear));
    printf("Deleted = %d\n", delete(queue, &front, &rear));

    display(queue, front, rear);

    insert(queue, size, &front, &rear, 40);
    insert(queue, size, &front, &rear, 50);

    display(queue, front, rear);

    return 0;
}
