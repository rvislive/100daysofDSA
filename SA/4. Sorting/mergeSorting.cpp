// Merge Sort Algo
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &A, int s, int m, int e) {
    vector<int> temp(e-s+1, 0);
    int p1 = s, p2 = m+1, p3 = 0;
    while(p1<=m && p2<=e) {
        if(A[p1] <= A[p2]) {
            temp[p3] = A[p1];
            p1++;
            p3++;
        } else {
            temp[p3] = A[p2];
            p2++;
            p3++;
        }
    }
    while(p1<=m) {
        temp[p3] = A[p1];
        p1++;
        p3++;
    }
    
    while(p2<=e) {
        temp[p3] = A[p2];
        p2++;
        p3++;
    }
    
    for(int i=0; i<(e-s); i++) {
        A[s+i] = temp[i];
    }
    // temp.clear();
}

void mergeSort(vector<int> &A, int s, int e) {
    // cout<<s<<e<<endl;
    // cout<<e<<endl;
    if(s >= e) return;
    int m = s + (e-s)/2;
    mergeSort(A, s, m);
    mergeSort(A, m+1, e);
    merge(A, s, m, e);
}

int main() {
    // Write C++ code here
    vector<int> A{-3, 1, 2, 4, -6, 5, 12, 10, 18};
    int N = A.size() - 1;
    mergeSort(A, 0, N);
    
    for(auto x:A) {
        cout<<x<<" ";
    }

    return 0;
}
