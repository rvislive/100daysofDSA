// print the start and end index of all subarray of length = k;
#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, -1, 6, -1, 4, 8, 9, 2, 11, 6, -1, 14, 8, -9};
    int N = sizeof(arr)/sizeof(int);

    int k=6;
    for(int i=0; i<N-k+1; i++) {
        cout<<"("<<i<<","<<(k-1+i)<<"),";
    }
    return 0;
}