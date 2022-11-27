// Rotate an array k times from Left to right

#include<iostream>
using namespace std;

void swep(int *A, int *B) {
    *A = *A + *B;
    *B = *A - *B;
    *A = *A - *B;
}

int main() {
    int arr[] = {3, 2, -1, 6, -1, 4, 8, 9, 2, 11, 6, -1, 14, 8, -9};
    int N = sizeof(arr)/sizeof(int);

    // reverse the whole array
    int i=0, j=N-1;
    while(i<j) {
        swep(&arr[i], &arr[j]);
        i++; 
        j--;
    }

    int k=2;
    i=0, j=N-(k+1);
    while(i<j) {
        swep(&arr[i], &arr[j]);
        i++; 
        j--;
    }

    i=N-k, j=N-1;
    while(i<j) {
        swep(&arr[i], &arr[j]);
        i++; 
        j--;
    }

    for(i=0; i<N; i++) {
        cout<<arr[i]<<" ";
    }

    // -1, 6, -1, 4, 8, 9, 2, 11, 6, -1, 14, 8, -9, 3, 2 

    return 0;
}