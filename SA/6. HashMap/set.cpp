// Given an array, Check if there is exists a pair of A[i] + A[j] = K where i != j

#include<iostream>
#include<set>
#include<vector>
using namespace std;

bool toCheck(vector<int> &A, int K) {
    int N = A.size();
    int diff = 0;
    set<int> s;
    for(int i=0; i<N; i++) {
        diff = K - A[i];
        if(s.count(diff)) return true;
        s.insert(A[i]);
    }
    return false;
}

int main() {
    vector<int> A { 2, 9, 11, 9, 15 };
    int k = 18;

    bool result = toCheck(A, k);
    cout<<result<<endl;
    return 0;
}