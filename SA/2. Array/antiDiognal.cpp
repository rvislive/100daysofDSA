// return an anti diognals 

#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > diagonal(vector<vector<int> > &A) {
    int N = A.size();
    int result[N][N];

    // first move to the 0th row. 
    int k=0;
    for(int j=0; j<N; j++) {
        int i=0;
        while(j>=0 && i<N) {
            result[k][i] = A[i][j];
            j--; i++;
        }
        k++;
    }

    // Move to the last column
    for(int i=1; i<N; i++) {
        int j=N-1;
        while(j>=0 && i<N) {
            result[k][i] = A[i][j];
            i++; j--;
        } 
        k++;
    }
    return result;
}


int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };



    return 0;
}