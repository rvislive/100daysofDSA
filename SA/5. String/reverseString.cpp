// Given a string A of size N. Return the string A after reversing the string word by word.

#include<bits/stdc++.h>
using namespace std;

void reverse(string &str, int s, int e) {
    int i = s;
    int j = e;
    while(i<j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    string A = "the sky is blue";
    int N = A.length();

    reverse(A, 0, N-1);
    for(int i=0; i<N; i++) {
        if(A[i] == ' '){

        }
        reverse(A, )
        int s = 0;
        int e = 
    }
    for(int i=0; i<N; i++) {
        cout<<A[i];
    }

    return 0;
}