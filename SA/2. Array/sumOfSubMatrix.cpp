// Calculate the sum of given submatrix of 2d size N*M; 
#include <iostream>
#include <vector>
using namespace std;

int sumOfSubMatrix(vector<vector<int>> &A, vector<int> &TL, vector<int> &BR) {
    int sum = 0;
    
    if((TL[0] == BR[0]) && TL[1] == BR[1]) {
        return A[TL[0]][BR[1]];
    } else if(TL[0] == BR[0]) {
        for(int i=TL[1]; i<=BR[1]; i++) {
            sum += A[TL[0]][i];
        }
    } else if(TL[1] == BR[1]) {
        for(int i=TL[0]; i<=BR[0]; i++) {
            sum += A[i][TL[1]];
        }
    } else {
        for(int i=TL[0]; i<=TL[1]; i++) {
            for(int j=BR[0]; j<=BR[1]; j++) {
                sum += A[i][j];
            }
        }
    }
    return sum;
}

int main() {
    // Write C++ code here
    vector< vector<int>> A 
    {
        {1, 2, 3, 4, 5, 6, 7},
        {-1, 2, -5, 2, 3, 4, 5},
        {4, 7, 8, 2, -4, 6 , 0},
        {11, 9, 4, 7, 21, 23, 4},
        {1, -2, 5, -2, -3, 4, 5},
    };
    
    vector<int> TL{3, 4};
    vector<int> BR{3, 4};
    cout<<sumOfSubMatrix(A, TL, BR);

    return 0;
}
