498 | Medium | Diagonal Traverse | Matrix

Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.

Constraints:
m == mat.length
n == mat[i].length
1 <= m, n <= 10^4
1 <= m * n <= 10^4
-10^5 <= mat[i][j] <= 10^5


vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int N = mat.size();
    int M = mat[0].size();
    
    vector<int> result;
    for(int s=0; s<(N+M-1); s++) {
        for(int x = 0; x<=s; x++) {
            int i = x, j = s-i;
            if(s%2 == 0) swap(i, j);
            
            if(i>=N || j>=M) continue;
            result.push_back(mat[i][j]);
        }
    }
    return result;
}

