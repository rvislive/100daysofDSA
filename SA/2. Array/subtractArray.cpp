#include<bits/stdc++.h>
using namespace std;

int main() {

    int N = A.size();
    int M = A[0].size();
    //vector<vector<int>> Z(N , vector<int> (M, 0));

    for(int i=0; i<N; i++) {
        for(int j=0; i<M; j++) {
            cout<<i<<j<<" ";
            A[i][j] = A[i][j] - B[i][j];
        }
    }
    return A;

    return 0;
}   