#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int, vector<int>, greater<int>> pq; // ascending priority queue

  // pushing elements into the queue
  pq.push(3);
  pq.push(1);
  pq.push(4);
  pq.push(1);
  pq.push(5);

  // printing the elements of the queue
  while (!pq.empty()) {
    cout << pq.top() << " "; // printing the smallest element
    pq.pop(); // removing the smallest element
  }

  return 0;
}