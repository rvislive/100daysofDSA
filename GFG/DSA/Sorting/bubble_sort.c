#include<stdio.h>

// just to print the array
void printArray(int * arr, int n) {
    for(int i = 0; i<n ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// swep two number without 3rd veriable
void swep(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// bubble short function without adaptive
void bubbleSort(int *arr, int n) {
    for(int i = 0; i < n-1; i++) { // it is used for the no. of pass
        printf("Working on the pass %d\n", i+1);
        for(int j = 0; j < (n-i-1); j++) { // it is used for the no. of compresions
            if(arr[j] > arr[j+1]) {  
                swep(&arr[j], &arr[j+1]); // if the previous value is greater then, swep it 
            }
        }
    }
}

// bubble short function with adaptive (better performance)
void bubbleSortAdaptive(int *arr, int n) {
    int isSorted = 0;
    for(int i = 0; i < n-1; i++) { // it is used for the no. of pass
        printf("Working on the pass %d\n", i+1);
        isSorted = 1;
        for(int j = 0; j < (n-i-1); j++) { // it is used for the no. of compresions
            if(arr[j] > arr[j+1]) {  
                swep(&arr[j], &arr[j+1]); // if the previous value is greater then, swep it 
                isSorted = 0;
            }
        }
        if(isSorted) {
            return;
        }
    }
}

int main() {
    int arr[] = {7, 9, 11, 2, 17, 4, 8, 23};
    // int arr[] = {1, 2, 4, 7, 8, 9, 11, 13, 17, 25};
    int n = sizeof(arr)/sizeof(int); // always calculate the size of array like this. 

    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}