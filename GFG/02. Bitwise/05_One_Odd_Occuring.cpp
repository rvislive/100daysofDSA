// One Odd Occurring
#include<iostream>
using namespace std;

// Naive soultion
int OneOddOccuring(int *arr, int n) {
  for(int i = 0; i < n; i++) {
    int count = 0;
    for(int j = i; j < n; j++) {
      if(arr[i] == arr[j]) count ++;
    }

    if((count % 2) != 0) {
      return arr[i];
    }
  }
}

// Efficient solution
int OddOccXor(int * arr, int n) {
  int result = 0;
  for(int i = 0; i < n; i++) {
    result = result ^ arr[i];
  }
  return result;
}

// More question can be made with the same concept. 
// find the missing number in a giver array there elements are belong in the range of [1 to n+1] of array size n only one times. 

int main() {
  int arr[] = {8, 7, 7, 8, 8};
  int size = sizeof(arr)/sizeof(int);
  cout<<OddOccXor(arr, size)<<endl;
  return 0;
}
