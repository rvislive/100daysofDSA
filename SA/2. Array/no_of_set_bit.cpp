#include<iostream>
using namespace std;

bool CheckBit(int N, int i) {
    return (((N>>i) & 1) == 1);
}

int countSetBit(int N) {
    int count = 0;
    while(N > 0) {
        if(CheckBit(N, 0)) {
            count++;
        } 
        N = N>>1;
    }
    return count;
}

int main() {
    cout<<countSetBit(27);
    return 0;
}