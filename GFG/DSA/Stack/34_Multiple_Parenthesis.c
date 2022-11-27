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

int isMatch(char a, char b) {
    if((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')) {
        return 1;
    }
    return 0;
}

int parenthsesIsBalanced (char * exp) {
    stack * sp;
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size*sizeof(char));
    
    char pooped_char;

    for(int i = 0; exp[i] != '\0'; i++) { // check untill the experssion is end
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(sp, exp[i]); // if we found (, {, and [ then push in the stack 
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if(isEmpty(sp)) {
                return 0;
            }
            pooped_char = pop(sp); // if we found ), }, and ] then pop from the stack
            if(!isMatch(pooped_char, exp[i])) {
                return 0;
            }
        }
    }

    if(isEmpty(sp)) { 
        return 1; // at the end if stack is empty then balanced else not
    } else {
        return 0;
    }
}

int main() {
    char * exp = "[(3)*(8+4)[";
    if(parenthsesIsBalanced(exp)) {
        printf("Balanced\n");
    } else {
        printf("Not Balanced\n");
    }
    return 0;
}