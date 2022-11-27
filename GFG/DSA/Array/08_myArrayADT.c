#include<stdio.h>
#include<stdlib.h>

typedef struct myArray {
    int totalSize;
    int usedSize;
    int *ptr;
} myArray;

void createArray(myArray *arr, int tSize, int uSize) {
    // with arrow operators
    arr->totalSize = tSize;
    arr->usedSize = uSize;
    arr->ptr = (int *)malloc(tSize*sizeof(int)); // To allocate the memory 
}

void showArray(myArray *arr) {
    printf("All array are: \n");
    for(int i=0; i < arr->usedSize; i++) {
        printf("%d\n", (arr->ptr)[i]);
    }
}

void setArray(myArray *arr) {
    for(int i=0; i < arr->usedSize; i++) {
        printf("Enter the %d element\n", i+1);
        scanf("%d", &(arr->ptr)[i]); // &(arr->ptr)[i] as we like &a[i]
    }
}

void setElement(myArray *arr, int index, int value) {
    (arr->ptr)[index] = value;
}

int main() {
    myArray marks;
    createArray(&marks, 10, 3);
    setArray(&marks);
    showArray(&marks);
    setElement(&marks, 0, 900);
    showArray(&marks);
    return 0;
}