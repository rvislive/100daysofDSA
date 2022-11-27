// Bubble Sort. 
#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int> &A) {
    int N = A.size();
    
    for(int i=0; i<N-1; i++) {
        int c = 0;
        for(int j=0; j<(N-i-1); j++) {
            if(A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
                c++;
            }
        }
        if(c==0) break;
    }
}


int main() {
    // Write C++ code here
    vector<int> A{3, -1, 6, 9, 4, 2, 5, 4};
    bubbleSort(A);
    
    for(auto x:A) {
        cout<<x<<" ";
    }

    return 0;
}
