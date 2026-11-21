#include <iostream>
using namespace std;    

#define SIZE 5
int deque[SIZE];
int front = -1, rear = -1;

// Check if the deque is full
bool isFull() {
   return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
}

// Check if the deque is empty
bool isEmpty() {
   return front == -1;
}

// Insert element at the front
void push_front(int element) {
   if (isFull()) {
      cout << "Deque is full" << endl;
      return;
   }
   
   if (isEmpty()) { // First element being inserted
      front = rear = 0;
   } 
   else if (front == 0) { // Wrap around
      front = SIZE - 1;
   } 
   else {
      front--;
   }

   deque[front] = element;
   cout << "Inserted -> " << element << endl;
}

// Display the deque
void display() {
   if (isEmpty()) {
      cout << "Empty Deque" << endl;
      return;
   }

   cout << "Elements -> ";
   int i = front;
   while (true) {
      cout << deque[i] << " ";
      if (i == rear) break;  // Stop at last element
      i = (i + 1) % SIZE;    // Circular increment
   }
   cout << endl;
}

int main() {
   push_front(1);
   push_front(2);
   push_front(3);
   push_front(4);
   push_front(5);
   display();
   return 0;
}
