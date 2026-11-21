#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int d, node *n) : data(d), next(n) {}
};

int main()
{
    // create nodes
    node *head = new node(10, nullptr);
    head->next = new node(20, nullptr);
    head->next->next = new node(30, nullptr);

    // traverse
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}