// For a given NxN square matrix, print the boundary or parimater of the matrix
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[4][4] = 
    {
        {1, 2, 3, 4}, 
        { 5, 6, 7, 8 }, 
        { 9, 10, 11, 12 }, 
        { 13, 14, 15, 16 }
    };
    int row = 4, col = 4;

    // print the boundary of the array. 

    // col-1 step (L-R) in 0th rows. 
    int i=0, j=0;
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

    return 0;
}