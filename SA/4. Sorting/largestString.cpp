// Given a array A of non negative integers, arrange them such that they form the largest number.

#include <bits/stdc++.h>
#include<string>
using namespace std;

bool TenModule(int a, int b) {
    return (a%10 > b%10);
}

string largestNumber(int B[], int N) {
	sort(B, B+N, TenModule);
    string result = "";
    for(int i=0; i<N; i++) {
        result += to_string(i);
    }
}

int main() {
    int A[5] = {3, 30, 34, 5, 9};
    largestNumber(A, 5);
    // cout<<<<endl;
    return 0;
}