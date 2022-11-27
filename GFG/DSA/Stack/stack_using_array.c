#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
    int size; // total size of the stack
    int top; // to store the top or recent veriable
    int *arr; // to store the the all veriable
} stack; 

// check is stack is empty?
int isEmpty(stack s) { 
    if(s.top == -1) {
        return 1;
    }
    return 0;
}

// check is stack is full?
int isFull(stack s) {
    if(s.top == (s.size-1)) {
        return 1;
    }
    return 0;
}

void display_stack(stack s) {
    for(int i = 0; i <= s.top; i++) {
        printf("%d ", s.arr[i]);
    }
    printf("\n");
}

void Push(stack s, int value) {
    if(isFull(s)) {
        printf("Stack Overflow\n");
    }
    s.top ++;
    s.arr[s.top] = value;
}

int pop(stack s) {
    if(isEmpty(s)) {
        printf("Stack underflow\n");
    }
    int val = s.arr[s.top];
    s.top --;
    return val;
}

int main() {
    stack s;
    s.size = 4;
    s.top = -1;
    s.arr = (int *) malloc(s.size * sizeof(int));

    Push(s, 5);
    display_stack(s);
    Push(s, 3);
    display_stack(s);
    Push(s, 6);
    display_stack(s);
    Push(s, 8);
    display_stack(s);
    return 0;
}