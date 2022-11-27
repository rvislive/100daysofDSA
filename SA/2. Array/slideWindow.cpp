// find the maximium subarray sum with length = k;

#include<bits/stdc++.h>
using namespace std;

int MaximiumSubArraySum(int A[], int N, int K) {
    int sum = 0;
    for(int i=0; i<K; i++) {
        sum += A[i]; 
    }

    int result = sum;
    for(int i=1; i<=N-K; i++) {
        sum += A[K+i-1] - A[i-1];
        result = max(result, sum);
    }
    return result;
}
/*
0, 1,  2, 3,  4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14  
3, 2, -1, 6, -1, 4, 8, 9, 2, 11, 6, -1, 14, 8, -9
13, 18, 25, 18, 33, 40, 35
*/

int main() {
    int arr[] = {33, 2, -1, 6, -1, 4, 8, 9, 2, 11, 6, -1, 14, 8, -9};
    int N = sizeof(arr)/sizeof(arr[0]);
    cout<<MaximiumSubArraySum(arr, N, 6);
    return 0;
}