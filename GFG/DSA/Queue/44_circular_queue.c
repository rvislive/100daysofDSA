#include<stdio.h>
#include<stdlib.h>

// circular Queue
typedef struct Queue {
    int f;
    int size;
    int * arr;
    int r;
} Queue;

// is Queue Empty?
int isEmpty(Queue * que) {
    if(que->f == que->r) {
        return 1;
    }
    return 0;
}

// is Queue full?
int isFull(Queue * que) {
    int isFront = (que->r + 1)%que->size;
    if(isFront == que->f) {
        return 1;
    }
    return 0;
}

// enqueue or insert the elements in circular Queue
void enqueue(Queue * que, int val) {
    if(isFull(que)) {
        printf("Queue is full, Queue is overflow\n");
    } 

    que->r = (que->r + 1)%que->size; // circular increment
    que->arr[que->r] = val;
}

// dequeue or delete the elements in circular Queue
int dequeue(Queue * que) {
    if(isEmpty(que)) {
        printf("Queue is Empty, Queue is underflow\n");
    } 
    int val = -1;
    que->f = (que->f + 1)%que->size; // circular increment
    val = que->arr[que->f];
    return val;
}

int main() {
    Queue * q = (Queue *) malloc(sizeof(Queue));

    q->size = 5;
    q->f = q->r = 0; // think, this time we can't take -1 because we are using mod in the program. mod never return negative value
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("Is Queue empty? : %d\n", isEmpty(q));
    printf("Is Queue full? : %d\n", isFull(q));

    enqueue(q, 12);
    printf("Is Queue empty? : %d\n", isEmpty(q));
    printf("Is Queue full? : %d\n", isFull(q));

    dequeue(q);
    printf("Is Queue empty? : %d\n", isEmpty(q));
    printf("Is Queue full? : %d\n", isFull(q));
    return 0;
}