#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

char stackTop (stack *sptr) {
    return sptr->arr[sptr->top];
}

int isOperator(char operator) {
    if(operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        return 1;
    }
    return 0;
}

int preced(char ch) {
    if(ch == '*' || ch == '/') {
        return 3;
    } else if (ch == '-' || ch == '+') {
        return 2;
    } else {
        return 0;
    }
}

char * infexToPostfix(stack * sptr, char * infix) {
    stack * sp = sptr;
    sp->size = 40;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size*sizeof(char));

    char * postfix = (char *) malloc((strlen(infix) + 1)*sizeof(char));
    int i = 0, j = 0;

    // a+b*c/d
    while (infix[i] != '\0') {
        if(!isOperator(infix[i])) { // if it is an oprend
            postfix[j] = infix[i];
            j++;
            i++;
        } else {
            if(preced(infix[i]) > preced(stackTop(sp))) {
                push(sp, infix[i]);
                i++;
            } else {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    if(!isEmpty(sp)) {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main() {
    char * infix = "a-b/c";
    // char * infix = "x-y/z-k*d";
    stack * sp = (stack *) malloc(sizeof(stack));
    printf("Postfix is %s", infexToPostfix(sp, infix));
    return 0;
}