#include<stdio.h>

// just to print the array
void printArray(int * arr, int n) {
    for(int i = 0; i<n ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int * arr, int n) {
    int key, j;
    for(int i = 1; i <= (n-1); i++) { // since we consider first elemnts of array is shorted so we will start sorting from the 2nd elemnts of the array.
        key = arr[i]; 
        j = i-1;
        while((arr[j] > key) && (j>0)) {
            arr[j+1] = arr[j]; // shifting the bigger number back
            j--;
        }
        arr[j+1] = key; 
    }
}

int main() {
    int arr[] = {7, 9, 11, 2, 17, 4, 8, 23};
    int n = sizeof(arr)/sizeof(n);

    printArray(arr, n);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}