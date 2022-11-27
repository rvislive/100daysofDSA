// Given a 2d matrix NxM. every row and column are sorted. Check for an elements K = 15, 30 and 34.

#include<iostream>
using namespace std;

int main() {
    int arr[8][6] = {
        {-1, 2, 4, 5, 9, 11}, 
        {1, 4, 7, 8, 10, 14}, 
        {3, 7, 9, 10, 12, 18}, 
        {6, 10, 12, 14, 16, 20},
        {9, 13, 16, 19, 22, 24},
        {11, 15, 17, 21, 23, 27},
        {14, 16, 18, 23, 27, 33},
        {19, 23, 30, 34, 38, 40}
    };
    int N = 8, M=6;
    int k=15; // to find in the array. 
    int i=0, j=M-1;
    while(i<N && j>=0) {
        if(arr[i][j]<k) {
            i++; // Skipping Row. 
        }
        if(arr[i][j]>k) {
            j--; // Skipping column;
        }

        if(arr[i][j]==k) {
            cout<<"Got it:"<<i<<j<<endl;
            break;
        }
    }
    cout<<"Got it:"<<i<<j<<endl;
    return 0;
}