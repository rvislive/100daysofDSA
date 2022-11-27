// An index is said to be special, After deleting that index sum of even indcies == sum of odd indcies. find how many number of special indeces are there? 

#include<iostream>
using namespace std;

int specialIndex(int arr[], int N) {
    // find evenPrefix & oddPrefix array
    int evenPf[N], oddPf[N];
    evenPf[0] = arr[0];
    for(int i=1; i<N; i++) {
        if(i%2) evenPf[i] = evenPf[i-1];
        else evenPf[i] = evenPf[i-1] + arr[i];
    }

    oddPf[0] = 0;
    for(int i=1; i<N; i++) {
        if(i%2) oddPf[i] = oddPf[i-1] + arr[i]; 
        else oddPf[i] = oddPf[i-1];
    }

    int evenSum, oddSum, count = 0;
    for(int i=0; i<N; i++) {

        if(i==0) {
            evenSum = oddPf[N-1] - oddPf[0];
            oddSum = evenPf[N-1] - evenPf[0];
        } else if(i==(N-1)) {
            evenSum = evenPf[i-1];
            oddSum = oddPf[i-1];
        } else {
            evenSum = evenPf[i-1] + (oddPf[N-1] - oddPf[i]);
            oddSum = oddPf[i-1] + (evenPf[N-1] - evenPf[i]);
        }

        if(evenSum == oddSum) {
            count ++;
        }
    }
    return count; 
}

int main() {
    int arr[] = { 4, 3, 2, 7, 6, -2 };
    int N = sizeof(arr)/sizeof(int);

    cout<<specialIndex(arr, N);
    return 0;
}