// find the two unique number of array
#include<iostream>
using namespace std;

bool CheckBit(int N, int i) {
    return (((N>>i) & 1) == 1);
}

void TwoUniqueNumber(int *arr, int n) {
    int x = 0;
    for(int i = 0; i < n; i++) {
        x ^= arr[i];
    }

    int pos;
    for(int i=0; i<30; i++) {
        if((x&1) == 1) {
            pos = i;
            break;
        }
        x = x>>1;
    }

    int ans1 = 0, ans2 = 0;
    for(int i=0; i<n; i++) {
        if(CheckBit(arr[i], pos)) {
            ans1 ^= arr[i];
        } else {
            ans2 ^= arr[i];
        }
    }

    cout<<ans1<<","<<ans2<<endl;
}

int main() {
    // int arr[] =  {3, 4, 5, 4, 7, 5};
    int arr[] =  {10, 8, 8, 21, 9, 12, 9, 6, 11, 10, 6, 12, 17, 21};
    TwoUniqueNumber(arr, 14);
    return 0;
}