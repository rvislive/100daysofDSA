// Given a number N print all the members from 1 to N in decresing orders
#include <iostream>
using namespace std;

void printDec(int N) {
    
    if(N == 1) {
        cout<<1<<" ";
        return;
    }
    cout<<N<<" ";
    printDec(N-1);
}

int main() {
    int N = 15;
    printDec(N);
    return 0;
}
