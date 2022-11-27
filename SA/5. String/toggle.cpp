// Toggle the string  S = "aBcdEf" O/P: "AbCDeF"

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "aBcdEfgsdgfUyhkhfdgHkjh";
    int N = s.length();

    for(int i=0; i<N; i++) {
        // Method 1;
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - ('a' - 'A');
        } else {
            s[i] = s[i] + ('a' - 'A');
        }

        // Method 2;
        // s[i] = s[i] ^ (1<<5);
        cout<<s[i];
    } 

    return 0;
}