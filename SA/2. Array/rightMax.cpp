// create a rightMax[] for an given array.
#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, -1, 16, -1, 4, 8, 9};
    int N = sizeof(arr)/sizeof(int);

    int rightMax[N];
    rightMax[N-1] = arr[N-1];
    for(int i = N-2; i>=0; i--) {
        rightMax[i] = max(arr[i], rightMax[i+1]);
    }

    // convert the same array in the rightMax
    // for(int i = N-2; i>=0; i--) {
    //     arr[i] = max(arr[i], arr[i+1]);
    // }

    for(int i=0; i<N; i++) {
        cout<<rightMax[i]<<" ";
    }
    return 0;
}