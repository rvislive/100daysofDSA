// For a given NxN square matrix, print the sprial of the matrix
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[5][5] = 
    {
        {1, 2, 3, 4, 5}, 
        { 5, 6, 7, 8, 7}, 
        { 9, 10, 11, 12, 9 }, 
        { 9, 10, 11, 12, 9 }, 
        { 13, 14, 15, 16, 11 }
    };
    int row = 5, col = 5;

    // print the boundary of the array. 

    // col-1 step (L-R) in 0th rows. 
    int i=0, j=0;
    while(col>1) {
        for(int l=1; l<col; l++) {
            cout<<arr[i][j]<<" ";
            j++;
        }
        // row-1 steps down in (col-1)th  : i=0, j=3
        for(int l=1; l<col; l++) {
            cout<<arr[i][j]<<" ";
            i++;
        }
        // i=3, j= 3
        for(int l=1; l<col; l++) {
            cout<<arr[i][j]<<" ";
            j--;
        }
        // i=3, j=0
        for(int l=1; l<col; l++) {
            cout<<arr[i][j]<<" ";
            i--;
        }
        col = col - 2;
        i++; j++;
    }

    if(col == 1) { 
        cout<<arr[i++][j++];
    }

    return 0;
}