#include<stdio.h>

void binarySearch(int arr[], int size, int findElement) {
    int LOW, HIGH, MID, flag = -1, index = 0;
    LOW = 0;
    HIGH = size - 1;  

    // coded by Harry bhai
    while(LOW <= HIGH) {
        MID = (LOW + HIGH)/2;
        if(arr[MID] == findElement ) {
            flag = 1;
            index = MID;
            break;
        } else if(arr[MID] < findElement) {
            LOW = MID + 1;
        } else { // arr[MID] > findElement
            HIGH = MID - 1;
        } 
    }

    if(flag > 0) {
        printf("We find the %d at the index number %d\n", findElement, index);
     } else {
        printf("There is no element of %d in this array\n", findElement);
     }
}

int main() {
    // Shorted array for binary search;
    int arr[] = {3, 5, 8, 12, 14, 18, 54, 62, 74, 89, 91};
    int size = 11, findElement = 18;
    binarySearch(arr, size, findElement);
    return 0;
}
