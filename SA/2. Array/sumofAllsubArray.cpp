// given an array , print the sum of all subarray

#include<iostream>
using namespace std;

/*
0, 1,  2, 3,  4, 5, 6
3, 2, -1, 6, -1, 4, 8

3 5 4 10 9 13 21
2 1 7 6 10 18
-1 5 4 8 16
6 5 9 17
-1 3 11
4 12
8
*/

int main() {
    int A[] = {3, 2, -1, 6, -1, 4, 8};
    int N = sizeof(A)/sizeof(int);

    for(int i=0; i<N; i++) {
        int sum=0;
        for(int j=i; j<N; j++) {
            sum += A[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}