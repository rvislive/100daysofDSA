#include<stdio.h>
#include<stdlib.h>

typedef struct stack {
    int size;
    int top;
    char *arr;
} stack;

int isEmpty(stack * sptr) {
    if(sptr->top == -1) {
        return 1;
    }
    return 0;
}

int isFull(stack * sptr) {
    if(sptr->top == sptr->size - 1) {
        return 1;
    }
    return 0;
}

void push(stack *sptr, char val) {
    if(isFull(sptr)) {
        printf("Stack overflow\n");
        return;
    } else {
        sptr->top ++;
        sptr->arr[sptr->top] = val;
    }
}

char pop(stack *sptr) {
    if(isEmpty(sptr)) {
        printf("Stack underflow\n");
    } else {
        char val = sptr->arr[sptr->top];
        sptr->top --;
        return val;
    }
}

int parenthsesIsMatch (char * exp) {
    stack * sp;
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size*sizeof(char));

    for(int i = 0; exp[i] != '\0'; i++) { // check untill the experssion is end
        if(exp[i] == '(') {
            push(sp, '('); // if we found ( then push in the stack 
        } else if (exp[i] == ')') {
            if(isEmpty(sp)) {
                return 0;
            }
            pop(sp); // if we found ) then pop from the stack
        }
    }

    if(isEmpty(sp)) { 
        return 1; // at the end if stack is empty then balanced else not
    } else {
        return 0;
    }
}

int main() {
    char * exp = "3)*(8+4";
    if(parenthsesIsMatch(exp)) {
        printf("Matched\n");
    } else {
        printf("Not matched\n");
    }
    return 0;
}