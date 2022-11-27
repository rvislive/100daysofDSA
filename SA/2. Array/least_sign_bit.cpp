// Find the least significent set bit
#include<iostream>
using namespace std;

int leastSignBit(int N) {
    int ans;
    for(int i = 0; i < 30; i++) {
        if((N&1) == 1) {
            ans = i;
            break;
        }
        N = N>>1;
    }
    return ans;
}

int main() {
    cout<<leastSignBit(23)<<endl;
    cout<<leastSignBit(10)<<endl;
    return 0;  
} 
