// Given a number N print all the members from 1 to N in increasing orders
#include <iostream>
using namespace std;

void printInc(int N) {
    
    if(N == 1) {
        cout<<1<<" ";
        return;
    }
    
    printInc(N-1);
    cout<<N<<" ";
}

int main() {
    int N = 15;
    printInc(N);
    return 0;
}
