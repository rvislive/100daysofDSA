// Length of longest consecutive ones

#include<iostream>
#include<string.h>
// #include <cstdlib>
using namespace std;

int main() {
    string A = "1011";
    int N = A.length();
    cout<<N<<endl;

    int left[N] = {0}; // NEW this will full every element with 0.
    left[0] = A[0] - '0';
    for(int i=1; i<N; i++) {
        if(A[i] == '0') left[i] == 0;
        else left[i] = left[i-1] + 1;
    }

    int right[N] = {0};
    right[N-1] = A[N-1] - '0';
    for(int i=N-2; i>=0; i--) {
        if(A[i] == '0') right[i] = 0;
        else right[i] = 1+right[i+1];
    }

    int c = 0;
    for(int i=0; i<N; i++) {
        if(A[i] == '1') c++;
    }

    if(c == N || c == (N-1)) cout<<c;
    else { 
        int ans = 0;
        for(int i=0; i<N; i++) {
            if(A[i] == '0') {
                int L = 0, R = 0;
                L += (i==0) ? 0 : left[i-1];
                R += (i==(N-1)) ? 0 : right[i+1];
                ans = max(ans, L+R+1);
            }
        }
        cout<<ans;
    }
    return 0;
}