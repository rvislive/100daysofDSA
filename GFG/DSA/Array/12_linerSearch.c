#include<stdio.h>

// find the element by using liner search
int findElement(int arr[], int size, int find) {
     for(int i = 0; i < size; i ++) {
         if(arr[i] == find) {
            return i;
         }
     }
     return -1;
}

int main() {
    // unsorted array for liner search
    int arr[] = {3, 15, 8, 1, 14, 12, 36, 2, 7};
    int size = 9, find = 12, flag;
    flag = findElement(arr, size, find);
    if(flag > 0) {
        printf("We find the %d at the index number %d\n", find, flag);
    } else {
        printf("There is no element of %d in this array\n", find);
    }
    return 0;
}