#include<stdio.h>

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int *arr, int n) {
    int key, k;
    for (int i = 1; i < n; i++) {
        key = arr[i]; // 9
        k = i - 1;
        while(arr[k] > key) {
            arr[k + 1] = arr[k];
        }
        arr[k + 1] = key;
    }
    
}

int main() {
    // 39 | 39, 45, 63, 18, 81, 108, 54, 72, 36

    int arr[] = {39, 9, 45, 63, 18, 81, 108, 54, 72, 36};
    int size = sizeof(arr)/sizeof(int);

    printArray(arr, size);
    return 0;
}