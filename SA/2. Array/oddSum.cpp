// Given N array of elements and Q query, for each query sum of all odd inducies in the given range

#include<iostream>
using namespace std;

int main() {
                //0, 1,  2, 3, 4, 5, 6, 7
    int arr[] = { 3, 4, -2, 8, 6, 2, 1, 3 };
    int N = sizeof(arr)/sizeof(int);

    int L = 2, R = 7;

    // culculating the even prefix sum.  
    arr[0] = 0;
    for(int i=1; i<N; i++) {
        if(i%2 == 1) {
            arr[i] = arr[i-1] + arr[i];
        } else {
            arr[i] = arr[i-1];
        }
    }

    if(L==0) {
        cout<<arr[R];
    } else {
        cout<<(arr[R] - arr[L-1]);
    }

    return 0;
}