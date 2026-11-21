#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        this->data = data1;
        this->next = next1;
    }
};

int main()
{
    Node *a = new Node(90, nullptr);
    cout << a->data;
    return 0;
}
// in a ll the memory is used is more compared to the array of same size