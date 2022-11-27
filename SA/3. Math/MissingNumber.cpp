/* Given an array of N, size. All element from (1-N) expect 1 element. find the missing number */

#include<iostream>
using namespace std;

int main() {
    int N = 5;
    int A[] = {5, 3, 1, 4};

    // Approch 2
    int a=0;
    for(int i=1; i<=N; i++) {
        a = a^i;
    }

    int b = 0;
    for(int i=0; i<N-1; i++) {
        b = b^A[i];
    }
    int ans = a^b;
    cout<<ans;

    // Approch 1;
    // int arrSum = 0;
    // for(int i=0; i<N-1; i++) {
    //     arrSum += A[i];
    // }
    // int ans = 0;
    // ans = N*(N+1)/2 - arrSum;
    // cout<<ans;
    return 0;
}