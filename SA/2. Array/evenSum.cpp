// given N array of elements and Q query, for each query sum of all even inducies in the given range

#include<iostream>
using namespace std;

int main() {
    int arr[] = { 3, 4, -2, 8, 6, 2, 1, 3 };
    int N = sizeof(arr)/sizeof(int);

    int L = 2, R = 7;

    // culculating the even prefix sum.  
    for(int i=1; i<N; i++) {
        if(i%2 == 1) {
            arr[i] = arr[i-1];
        } else {
            arr[i] = arr[i-1] + arr[i];
        }
    }

    if(L==0) {
        cout<<arr[R];
    } else {
        cout<<(arr[R] - arr[L-1]);
    }

    return 0;
}