#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor requires both data and the next pointer
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

// MOVED OUTSIDE THE CLASS: Now main() can see it directly
Node *convertArrToLl(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        return nullptr;
    }

    // Created head with 2 arguments
    Node *head = new Node(arr[0], nullptr);
    Node *current = head;

    for (int i = 1; i < arr.size(); i++)
    {
        // FIXED: Added ', nullptr' as the second argument here
        current->next = new Node(arr[i], nullptr);
        current = current->next;
    }
    return head;
}
// Traversal function
Node *traversal(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
}
// Counting
int countLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
// Deleting the first node
Node *deletestart(Node *head)
{
    Node *kullu = head;
    if (head == nullptr || kullu->next == nullptr)
    {
        delete (kullu);
        return nullptr;
    }

    Node *temp = kullu->next;
    delete (kullu);
    return temp;
}
// Deleting the tail Node
Node *deleteTail(Node *head)
{
    Node *kullu = head;
    if (head == nullptr || kullu->next == nullptr)
    {
        delete (kullu);
        return nullptr;
    }
    while (kullu->next->next != nullptr)
    { //[1,2,2,33,4,5,3,432]
        kullu = kullu->next;
    }
    delete (kullu->next);
    kullu->next = nullptr;
    return head;
}
// Deleting the Kth element
Node *deletek(Node *head, int k)
{
    if (head == nullptr)
    {
        return head;
    }
    if (k == 1)
    {
        Node *kullu = head;
        Node *temp = kullu->next;
        delete (kullu);
        return temp;
    }
    if (k > 1)
    {
        Node *temp = head;
        int count = 1;

        // Stop exactly one node BEFORE the Kth element
        while (count < k - 1 && temp != nullptr)
        {
            temp = temp->next;
            count++;
        }

        // Safety check: Make sure the Kth node actually exists before deleting
        if (temp == nullptr || temp->next == nullptr)
        {
            return head;
        }

        Node *rem = temp->next;        // Step 1: Save the node to delete
        temp->next = temp->next->next; // Step 2: Skip over it
        delete (rem);                  // Step 3: Delete it safely

        return head; // FIXED: Always return the head of the whole list!
    }
}
// Deleting depending on the value
Node *deletegive(Node *head, int ele)
{

    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    while (head != nullptr && head->next->data == ele)
    {
        head = head->next;
    }
}
Node *insertAtTop(Node *head, int val)
{
    Node *lund = new Node(val, nullptr);
    lund->next = head;
    return lund;
}
Node *insertAtLast(Node *head, int val)
{
    Node *newNode = new Node(val, nullptr);

    if (head == nullptr)
    {
        return newNode;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}
Node *insertAtK(Node *head, int k, int val)
{
    if (k == 1)
    {
        return new Node(val, head);
    }

    Node *temp = head;
    int count = 1;

    while (temp != nullptr && count < k - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr)
        return head; // k out of bounds

    Node *newNode = new Node(val, temp->next);
    temp->next = newNode;

    return head;
}
Node *insbefVal(Node *head, int insval, int val)
{
    Node *temp = head;
    if (head == nullptr)
    {
        cout << "Cant Insert Bcz Linked List is empty";
    }
    if (head->data == val)
    {
        Node *temp = new Node(val, head);
    }
    while (temp->next != nullptr && temp->next->data != val)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        cout << "Value " << val << " not found";
        return head;
    }

    Node *newNode = new Node(insval, temp->next);
    temp->next = newNode;

    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 34234, 3, 124};

    // This works perfectly now!
    Node *head = convertArrToLl(arr);
    // cout << traversal(head);
    // cout << endl;
    // cout << countLL(head);
    // cout << endl;
    // Node *Kthdel = deletek(head, 5);
    // cout << traversal(Kthdel)<<endl;
    // cout << traversal(insertAtTop(head, 56)) << endl;
    // cout << traversal(insertAtK(head, 2, 99))<<endl;
    cout << traversal(insbefVal(head, 45, 3));
    return 0;
}