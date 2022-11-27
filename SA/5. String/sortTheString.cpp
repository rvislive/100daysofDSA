// given a lowercase string. sort the string.

#include<bits/stdc++.h>
using namespace std;

int main() {
    string S = "nowcheckifthereareanycharactersthatneedtobechanged";
    int N = S.length();

    int count[26] = {0};
    int index = -1;
    for(int i=0; i<N; i++) {
        index = S[i] - 'a';
        count[index] ++;
    }

    for(int i=0; i<26; i++) {
        while(count[i] > 0) {
            cout<<(char)(i + 'a');
            count[i] --;
        }
    }
    return 0;
}