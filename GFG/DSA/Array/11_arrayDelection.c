#include<stdio.h>

// show array
void showArray(int *arr, int size) {
    for(int i = 0 ; i < size; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

// code for delection
void deleteArray(int *arr, int size, int index) {
    
    for(int i = index; i < size - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    printf("ELement %d is now deleted\n", *(arr + index ));
}

int main() {
    int arr[] = {3, 5, 8, 12, 14, 18, 36, 52, 73};
    int size = 9, index = 5;
    showArray(arr, size);
    deleteArray(arr, size, index);
    size --;
    showArray(arr, size);
    return 0;
}