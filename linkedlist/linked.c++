#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
    int data;
    node *next;

public:
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    // node n1;
    // n1.data = 67;
    // n1.next = nullptr;
    // cout << n1.data << n1.next;

    // node c = {34, nullptr};
    // cout << c.data << endl;
    // node *y = &c;
    // cout << y->data;
    node *y = new node(67, nullptr);
    cout << y;
    // 0x1011998 this address the the pointer to the memory location of that thing and this is very easy to understand

    return 0;
}