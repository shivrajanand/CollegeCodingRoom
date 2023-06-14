#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
private:
    std::vector<int> heap;

    // Helper function to maintain the heap property
    void heapifyUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index] < heap[parentIndex]) {
                std::swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    // Helper function to maintain the heap property
    void heapifyDown(int index) {
        int heapSize = heap.size();
        while (index < heapSize) {
            int leftChildIndex = 2 * index + 1;
            int rightChildIndex = 2 * index + 2;
            int smallestIndex = index;

            if (leftChildIndex < heapSize && heap[leftChildIndex] < heap[smallestIndex]) {
                smallestIndex = leftChildIndex;
            }

            if (rightChildIndex < heapSize && heap[rightChildIndex] < heap[smallestIndex]) {
                smallestIndex = rightChildIndex;
            }

            if (smallestIndex != index) {
                std::swap(heap[index], heap[smallestIndex]);
                index = smallestIndex;
            } else {
                break;
            }
        }
    }

public:
    // Check if the priority queue is empty
    bool isEmpty() {
        return heap.empty();
    }

    // Insert an element into the priority queue
    void insert(int data) {
        heap.push_back(data);
        heapifyUp(heap.size() - 1);
    }

    // Remove and return the minimum element from the priority queue
    int extractMin() {
        if (isEmpty()) {
            cout << "Priority queue is empty!\n";
            return -1;
        }

        int minElement = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return minElement;
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(10);
    pq.insert(30);
    pq.insert(20);
    pq.insert(5);

    cout << pq.extractMin() << "\n";  // Output: 5
    cout << pq.extractMin() << "\n";  // Output: 10
    cout << pq.extractMin() << "\n";  // Output: 20
    cout << pq.extractMin() << "\n";  // Output: 30

    cout << pq.isEmpty() << "\n";  // Output: 1 (true)

    return 0;
}