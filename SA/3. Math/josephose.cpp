// N people will stand on the circle. 
// Intially Person 1 will have a knife. 
// Person will kill person next to her in clockwise and 
// pass the knife to the next person. Find the last person remains.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int N = 200;
    // find the nearest power of 2.
    int i=0, k=0, ans;
    while(pow(2, i) < N) {
        k = pow(2, i);
        i++;
    }
    ans = (N-k)*2 + 1;
    cout<<ans;
    return 0;
}