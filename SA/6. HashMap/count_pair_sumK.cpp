// Given an array, count the no of pair if there is exists a pair of A[i] + A[j] = K where i != j

#include<iostream>
#include<set>
#include<vector>
using namespace std;

int toCheck(vector<int> &A, int K) {
    int N = A.size();
    int diff = 0, count = 0;
    set<int> s;
    for(int i=0; i<N; i++) {
        diff = K - A[i];
        if(s.count(diff)) count ++;;
        s.insert(A[i]);
    }
    s.clear();
    return count;
}

int main() {
    vector<int> A { 2, 9, 11, 9, 15, 7, 10, 8};
    int k = 17;

    int result = toCheck(A, k);
    cout<<result<<endl;
    return 0;
}