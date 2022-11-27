#include<stdio.h>

// display the array: Transversal 
void arrDisplay(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// display the arr without size given
void arrDisplayWithoutSize(int * arr) {
   int arrLen = sizeof(arr)/sizeof(int); // to culculate the size of array, but it not working 
   printf("%d", arrLen);
}

// insertion in the array
int indexInsert(int arr[], int size, int cap, int index, int value) {
    if(size >= cap) {
        return -1;
    }

    for(int i = size - 1; i >= index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = value;
    return 1;
}

int findIndex(int arr[], int size, int value) {
    int index = 0;
    for(int i = 0; i < size; i++) {
         if(arr[i] <= value) {
            index ++;
        } else {
            return index + 1;
        }
    }
}

// Insert with order 
int indexInsertWithOrder(int arr[], int size, int cap, int value) {
    int index = 0;
    index = findIndex(arr, size, value);
    indexInsert(arr, size, cap, index, value);
}

int main() {
    int arr[] = {5, 8, 12, 14, 18, 54}; // ['', '', ''] is used in javascript but in c we use curly brese
    int size = 6;
    arrDisplay(arr, size);
    // arrDisplayWithoutSize(arr);
    int index = 4, element = 13;
    int isInsert;
    // isInsert = indexInsert(arr, size, 50, index, element);
    isInsert = indexInsertWithOrder(arr, size, 50, element);
    if(isInsert < 0) {
        printf("Failed instration\n");
    } else {
        printf("Array Inserted\n");
        size = size + 1;
        arrDisplay(arr, size);
    }
    // printf("%d", findIndex(arr, size, 5));
    return 0;
}