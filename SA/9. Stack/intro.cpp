#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> st;

  // push/insert 4 elements
  st.push(4);
  st.push(5);
  st.push(6);
  st.pop();
  st.push(7);

  cout<<st.size()<<endl;
  
  while(!st.empty()) {
    cout<<st.top()<<" ";
    st.pop();
  }
  return 0;
} 
