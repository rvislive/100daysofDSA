// Find the max subarray sum of len = k;

#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, -1, 6, -1, 4, 8, 9, 2, 11, 6, -1, 14, 8, -9};
    int N = sizeof(arr)/sizeof(int);

    int k=2;
    int sum = 0;
    for(int i=0; i<k; i++) {
        sum += arr[i];
    }

    int max = sum;
    for(int i=1; i<=N-k; i++) {
        sum = sum + arr[k+i-1] - arr[i-1];
        if(sum > max) {
            max = sum;
        }
    }

    cout<<max;
    return 0;
}