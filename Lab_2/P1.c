// Write a program to implement stack operations (PUSH, POP, PEEP, CHANGE & DISPLAY)
#include <stdio.h>

void push(int* stack, int size, int* top, int val) {
    if (*top >= size - 1) return;

    stack[++(*top)] = val;
    // *(stack + ++(*top)) = val;
}

int pop(int* stack, int* top) {
    if (*top == -1) return -1;

    return stack[(*top)--];
}

int peep(int* stack, int top, int i) {
    if (top - i + 1 < 0) return -1;

    return stack[top - i + 1];
}

void change(int* stack, int top, int i, int val) {
    if (top - i + 1 < 0) return;

    stack[top - i + 1] = val;
}


void display (int* stack, int top) {
    if (top == -1) {
        printf("\nEmpty\n");
        return;
    }

    for (int i=top; i>=0; i--) {
        printf("%d \n", stack[i]);
    }
    printf("Done\n");
}

int main () {
    int stack[100];
    int size = 100;
    int top = -1;

    push (stack, size, &top, 10);
    push (stack, size, &top, 20);
    display(stack, top);

    int p1 = pop (stack, &top);
    int p2 = pop (stack, &top);
    int p3 = pop (stack, &top);
    printf("%d %d %d ", p1, p2, p3);
    display(stack, top);

    push (stack, size, &top, 10);
    push (stack, size, &top, 20);
    display(stack, top);
    // int pe = peep (stack, top, 2);
    // printf("%d\n", pe);
    change(stack, top, 2, 80);
    display(stack, top);

    return 0;
}
