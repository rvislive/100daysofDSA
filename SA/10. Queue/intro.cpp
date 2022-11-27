#include <iostream>
#include <queue>
using namespace std;

int main() {
  // push(x)
  // pop()
  // front()
  // back()
  // empty()
  // size()
  queue<int> q;

  q.push(12); // 12
  q.push(13); // 12, 13
  q.push(15); // 12, 13, 15

  cout<<q.front()<<endl;  
  cout<<q.back()<<endl;
  cout<<q.size()<<endl;

  q.push(17); // 12, 13, 15, 17
  q.push(21); // 12, 13, 15, 17, 21
  q.push(25); // 12, 13, 15, 17, 21, 25
  q.pop(); // 13, 15, 17, 21, 25
  q.pop(); // 15, 17, 21, 25

  cout<<q.front()<<endl;
  cout<<q.back()<<endl;
  cout<<q.size()<<endl;

  while(!q.empty()) {
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
} 
