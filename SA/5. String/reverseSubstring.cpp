// reverse the substring. 

#include<bits/stdc++.h>
using namespace std;

string reverse(string str, int s, int e) {
    int i = s;
    int j = e;
    while(i<j) {
        char temp = str[i];
        str[i] = (char)str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

int main() {
    string str = "nowcheckifthereareanycharactersthatneedtobechanged";
    int N = str.length();

    string S = reverse(str, 0, N-1);
    for(int i=0; i<N; i++) {
        cout<<S[i];
    }
    return 0;
}