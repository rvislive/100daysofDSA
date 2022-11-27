// An index is said to be special, After deleting that index sum of even indcies == sum of odd indcies. find how many number of special indeces are there? 

#include<iostream>
using namespace std;

int specialIndex(int *arr, int N) {
    int count = 0;
    for(int i=0; i<N; i++) {
        for(int j=i; j<N-1; j++) {
            arr[j] = arr[j+1];
        }

        int sumOdd = 0;
        int sumEven = 0;
        for(int k=0; k<N-1; k++) {
            if(k%2) sumOdd += arr[k];
            else sumEven += arr[k];
        }
        
        if(sumEven == sumOdd) count++;
    }
    return count;
}

int main() {
    int arr[] = { 4, 3, 2, 7, 6, -2 };
    int N = sizeof(arr)/sizeof(int);

    cout<<specialIndex(arr, N);
    return 0;
}