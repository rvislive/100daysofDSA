
/*
1572. Easy

Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal 
and all the elements on the secondary diagonal that are not part 
of the primary diagonal.

Constraints:
n == mat.length == mat[i].length
1 <= n <= 100
1 <= mat[i][j] <= 100

*/

int diagonalSum(vector<vector<int>>& mat) {
    int N = mat.size();
    
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += mat[i][i] + mat[i][N-i-1];
    }

    // if Odd number of row than subtract middle element
    if(N%2) {
        sum = sum - mat[N/2][N/2];
    }
    return sum;
}

