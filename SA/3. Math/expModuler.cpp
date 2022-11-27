// power(a, n, P) = a^n(NOT XOR) % P

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a=9, n=500, p=2;
    
    long prod = 1;
    for(int i=0; i<n; i++) {
        prod = (prod%p * a%p) % p;
    }
    cout<<(prod % p);
    return 0;
}