// create a leftMax[] for an given array.
#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, -1, 6, -1, 4, 8, 9};
    int N = sizeof(arr)/sizeof(int);

    int leftMax[N];

    leftMax[0] = arr[0];
    for(int i=1; i<N; i++) {
        leftMax[i] = max(leftMax[i-1], arr[i]);
    }

    for(int i=0; i<N; i++) {
        cout<<leftMax[i]<<" ";
    }

    return 0;
}