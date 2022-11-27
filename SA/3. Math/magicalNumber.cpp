/*
Given an integer A, find and return the Ath magic number.

A magic number is defined as a number which can be expressed as a power of 5 or sum of unique powers of 5.

*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int A = 5;
    int i=0, res = 0;
    while(A>0) {
        if(A&1) res += pow(5, i+1);
        i++;
        A = A>>1;
    }
    cout<<res;
    return 0;
}
