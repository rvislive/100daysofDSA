#include<iostream>
using namespace std;

bool CheckBit(int N, int i) {
    return (((N>>i) & 1) == 1);
}

int main() {
    cout<<CheckBit(23, 0);
    return 0;
}
