#include<iostream>
using namespace std;

int main() {
    int arr[] = {3, 2, -1, 6, -1, 4, 8, 9};
    int N = sizeof(arr)/sizeof(int);

    // finding prefix array: comlutative sum
    // Pf[i] = sum of all elements from 0 to i.
    int Pf[N];
    Pf[0] = arr[0];
    for(int i=1; i<N; i++) {
        Pf[i] = Pf[i-1] + arr[i];
    }
    // In this above approch time & space complexity are O(N) resp. 

    // If we calculate the sum in the same arr[] then space complexity will be constant. O(1)
    for(int i=1; i<N; i++) {
        arr[i] = arr[i-1] + arr[i];
    }
    // Now arr[] became the prefix array. 

    // Sum of all elements from 0 to 4 is Pf[4];
    cout<<Pf[4]<<endl;
    cout<<arr[4]<<endl;

    // sum of all elements from [2, 5] is Pf[5] - Pf[1]
    cout<<Pf[5] - Pf[1]<<endl;
    cout<<arr[5] - arr[1]<<endl;
    return 0;
}