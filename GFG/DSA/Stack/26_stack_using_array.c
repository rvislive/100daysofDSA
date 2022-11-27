// isFull, isEmpty, push, pop, and peek operation of stack
// Last in first out
#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
    int size; // total size length of the stack
    int top; // to hold the recent push variable
    int *arr; // to store the stack elements
} stack;

// if stack's size is greater then its size or equal to (size - 1), then it is full we called it stack overflow
int isFull (stack *ptr) {
    if(ptr->top == (ptr->size - 1)) {
        return 1;
    }
    return 0;
}

// if stack's top is -1 then we say, stack is empty or it is underflow
int isEmpty (stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    }
    return 0;
}

// to display all the value inside the stack 
void display(stack *ptr) {
    for(int i = ptr->top ; i >= 0; i--) {
        printf("%d ", ptr->arr[i]);
    }
    printf("\n");
}

// push the new value on the top of stack. 
// first check, if it full then it can't be possible to insert more value
// if not then, increase the top by one and assign the new value to the array index
void push(stack *ptr, int val) {
    if(isFull(ptr)) {
        printf("Stack Overflow! Now we can\'t push %d to the stack\n", val);
        return;
    } else {
        ptr->top ++ ;
        ptr->arr[ptr->top] = val;
    }
}

// to remove the top value, just decrease the top by one and return the top value after checking is empty stack
int pop(stack *ptr) {
    if(isEmpty(ptr)) {
        printf("Stack UnderFlow! Now we can\'t pop from the stack\n");
        return -1;
    } else {
        int val = ptr->arr[ptr->top]; // store the removing value in the val variable
        ptr->top -- ;
        return val;
    }
}

// to get any value of the index. 
int peek(stack *ptr, int index) {
    if(index < 0) {
        printf("Not a valid index\n");
        return -1;
    } 
    return ptr->arr[index]; // return the value at that particular index value
}

// to get the value of stack's top
int stackTop(stack *ptr) {
    return ptr->arr[ptr->top];
}

// to get the value of stack's bottam
int stackBottam(stack *ptr) {
    return ptr->arr[0];
}

int main() {
    stack *sp = (stack *)malloc(sizeof(stack));

    sp->size = 8;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    push(sp, 11);
    push(sp, 14);
    push(sp, 21);
    push(sp, 61);
    push(sp, 31);
    push(sp, 17);
    push(sp, 71);
    push(sp, 34);

    // pop(sp);
    // pop(sp);
    display(sp);
    // printf("The value at index %d is %d\n", 6, peek(sp, 6));
    printf("The value stack top: %d\n", stackTop(sp));
    printf("The value stack bottom: %d\n", stackBottam(sp));
    return 0;
}