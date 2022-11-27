// To count the number of equilibrium indices.
#include<iostream>
using namespace std;

int main() {
    // int arr[] = {3, 2, -1, 6, -1, 4, 8, 9};
    int arr[] = {3, -1, 2, -1, 1, 2, 1};
    //int arr[] = {0, 0, 0, 0, 0, 0, 0};
    int N = sizeof(arr)/sizeof(int);

    // Without any extra space, we are making arr in the prefix array.
    for(int i=1; i<N; i++) {
        arr[i] = arr[i-1] + arr[i];
    }

    int count = 0;
    if((arr[N-1] - arr[0]) == 0) {
        count ++;
        cout<<"Index: "<<0<<endl;
    }
    for(int i=1; i<N; i++) {
        if(arr[i-1] == (arr[N-1] - arr[i])) { 
            count ++; 
            cout<<"Index: "<<i<<endl;
        } 
    }
    cout<<count<<endl;
    return 0;
}