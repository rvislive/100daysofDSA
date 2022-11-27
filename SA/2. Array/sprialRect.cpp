// For a given NxM matrix, print the sprial of the matrix
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[6][5] = 
    {
        {1, 2, 3, 4, 5}, 
        { 5, 6, 7, 8, 7}, 
        { 9, 10, 11, 12, 9 }, 
        { 9, 10, 11, 12, 9 }, 
        { 13, 14, 15, 16, 11 },
        {1, 2, 3, 4, 5}
    };
    int N = 6, M = 5;

    // col-1 step (L-R) in 0th rows. 
    int i=0, j=0;
    while(M>1 && N>1) {
        for(int l=1; l<M; l++) {
            cout<<arr[i][j]<<" ";
            j++;
        }
        // row-1 steps down in (col-1)th  : i=0, j=4
        for(int l=1; l<N; l++) {
            cout<<arr[i][j]<<" ";
            i++;
        }
        // i=5, j= 4
        for(int l=1; l<M; l++) {
            cout<<arr[i][j]<<" ";
            j--;
        }
        // i=5, j=0
        for(int l=1; l<N; l++) {
            cout<<arr[i][j]<<" ";
            i--;
        }
        M = M - 2;
        N = N - 2;
        i++; j++;
    }

    cout<<arr[i++][j++];
    if(M>N) {
        
    }

    return 0;
}