// find the mod of a string

#include<iostream>
#include<string.h>
using namespace std;

int main() {
    string A = "23";
    int B = 25;
    long ans = 0; 
    long exp = 1;
    int N = A.size();
    for(int i=N-1; i>=0; i--) {
        ans = (ans + ((int)A[i] - 48) * exp)%B;
        exp = (exp * 10)%B;
    }
    cout<<ans;
    return 0;
}