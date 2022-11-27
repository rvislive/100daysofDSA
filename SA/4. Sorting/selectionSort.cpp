// Selection Sort. 
#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(vector<int> &A) {
    int N = A.size();
    
    for(int i=0; i<N-1; i++) {
        int minV = 999999999, ind = i;
        for(int j=i; j<N; j++) {
            if(A[j] < minV) {
                minV = A[j];
                ind = j;
            }
        }
        swap(A[i], A[ind]);
    }
}


int main() {
    // Write C++ code here
    vector<int> A{1, 2, 1, 3};
    selectionSort(A);
    
    for(auto x:A) {
        cout<<x<<" ";
    }

    return 0;
}
