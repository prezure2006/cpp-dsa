#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *back;
    int data;
    Node *front;

public:
    Node(int val, Node *prev, Node *upcome)
    {
        data = val;
        back = prev;
        front = upcome;
    }
    Node(int val)
    {
        data = val;
        back = nullptr;
        front = nullptr;
    }
};
Node *convertArrtoLL(vector<int> &hill)
{
    Node *newNode = new Node(hill[0]);
    Node *prev = newNode;
    for (int i = 1; i < hill.size(); i++)
    {
        Node *temp = new Node(hill[i], prev, nullptr);
        prev->front = temp;
        prev = temp;
    }
    return newNode;
}
// Printing a DLL
Node *traversal(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << "->";
        curr = curr->front;
    }
}
// Deleting from the front
Node *delhead(Node *head)
{
    if (head == nullptr)
        return nullptr; // edge case

    Node *newHead = head->front; // save new head first
    if (newHead != nullptr)
        newHead->back = nullptr; // disconnect back pointer

    delete head;
    return newHead;
}
// Delete From the end
Node *delfromend(Node *head)
{
    Node *temp = head;
    if (head == nullptr || head->front == nullptr)
    {
        delete (head);
        return NULL;
    }
    while (head->front->front != NULL)
    {
        head = head->front;
    }
    Node *tail = head->front; // tail is the last node
    head->front = nullptr;    // disconnect second-last from tail
    delete tail;
    return temp;
}
// Delete the kth element
Node *deletekth(Node *head, int k)
{
    Node *temp = head;
    if (head == nullptr)
    {
        cout << "Element Doesnt Exist ";
    }
}

int main()
{

    vector<int> hira = {2, 35, 5, 6, 3};
    Node *head = convertArrtoLL(hira);
    // cout << head->data;
    // cout << head->front->front->back->data;
    cout << traversal(head);
    return 0;
}