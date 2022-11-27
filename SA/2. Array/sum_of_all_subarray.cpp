#include<iostream>
#include<vector>
using namespace std;

// this is taking O^3 time complexity. 
void sumOfAllSubArrayO3(int arr[], int N) {
    int ans = 0;
    for(int i=0; i<N; i++) {
        for(int j = i; j<N; j++) {
            int sum = 0;
            for(int k = i; k<= j; k++) {
                sum += arr[k];
            }
            ans += sum;
            cout<<"("<<i<<","<<j<<")"<<":"<<sum<<endl;
        }
        cout<<endl;
    }
    cout<<ans;
}


// this is taking O^2 time complexity
void sumOfAllSubArrayO2(int arr[], int N) {
    int ans = 0;
    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j = i; j<N; j++) {
            sum += arr[j];
            ans += sum;
            cout<<"("<<i<<","<<j<<")"<<":"<<sum<<endl;
        }
        cout<<endl;
    }
    cout<<ans;
}

void sumOfAllSubArray(int arr[], int N) {
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += arr[i]*(i+1)*(N-i);
    }
    cout<<sum;
}

int main() {
    int arr[] = {3, 2, -1, 6, -1, 4, 8, 9};
    int N = sizeof(arr)/sizeof(int);
    sumOfAllSubArray(arr, N);
    return 0;
}