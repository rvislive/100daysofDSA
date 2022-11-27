#include<stdio.h>

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void swep(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < (n-1); i++) { // total number of passes 
        for (int j = 0; j < (n-i-1 ); j++) { // total number of compare
            if(arr[j] > arr[j+1]) {
                swep(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {30, 52, 29, 87, 63, 27, 18, 54};
    int size = sizeof(arr)/sizeof(int);

    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}