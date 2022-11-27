/*
Given an array with n objects colored red, white or blue, sort them so that objects of the same color are adjacent, with the colors in the order red, white and blue.
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int A[] = {0, 1 ,2 ,0 ,1 ,2};
    int R=0, W=0, B=0;
    int N = 6;
    for(int i=0; i<N; i++) {
        if(A[i] == 0) R++;
        if(A[i] == 1) W++;
        if(A[i] == 2) B++;
    }

    // cout<<R<<W<<B<<endl;
    vector<int> res;
    int i=0;
    while(i<R) {
        res[i] = 0;
        i++;
    }
    while(i<(W + R)) {
        res[i] = 1;
        i++;
    }
    while(i<N) {
        res[i] = 2;
        i++;
    }
    return 0;
}