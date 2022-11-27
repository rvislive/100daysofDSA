#include<stdio.h>
#include<stdlib.h>

struct queue {
    int f; // to store the index of front element
    int size; // to store the total size of queue
    int * arr; // to store the value of each elements
    int r; // to store the index of rare element
};

// to check if queue is empty
int isEmpty(struct queue *q) { 
    if(q->f == q->r) { // if front and rare is same, menas there is no elements in the queue
        return 1;
    }
    return 0;
}

// to check if queue is full
int isFull(struct queue *q) {
    if(q->r == (q->size - 1)) { // if the rare index is pointing to the last elements or rare = size 
        return 1;
    }
    return 0;
}

// we called enqueue to insert the value in queue. 
void enqueue(struct queue * q, int val) {
    struct queue * que = q; // make a pointer and assign to the queue, optional
    if(isFull(q)) { // check if it full then we can insert anymore
        printf("Queue overflow\n");
    } else {
        que->r ++; // if not, then we need a place to insert increase the value of rare by 1
        que->arr[que->r] = val; // and assign the value at that rare index
    }
}

// // we called dequeue to delete the value in a queue
int dequeue(struct queue * q) {
    struct queue * que = q; // make a pointer and assign to the queue, optioanl
    int a = -1; 
    if(isEmpty(q)) { // check if it empty then we can't delete
        printf("Queue underflow\n");
    } else {
        que->f = que->f + 1; // just increase the index of front by one
        a = que->arr[que->f]; // and assign the value of that index
    }
    return a; // now return that value 
}

int main() {
    struct queue que;
    que.size = 6;
    que.r = que.f = -1;
    que.arr = (int *) malloc(que.size * sizeof(int));

    printf("is empty %d\n is Full %d\n\n", isEmpty(&que), isFull(&que));
    enqueue(&que, 12);
    enqueue(&que, 13);
    enqueue(&que, 14);
    enqueue(&que, 15);
    enqueue(&que, 16);
    printf("%d\n ", dequeue(&que));
    printf("%d\n\n ", dequeue(&que));
    printf("is empty %d\n is Full %d\n", isEmpty(&que), isFull(&que));

    return 0;
}