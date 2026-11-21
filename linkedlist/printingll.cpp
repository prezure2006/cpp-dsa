#include <bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data ;
    node *next1;
};

void display (struct node *p){
    node first = *p;
    while (p!= nullptr){
        cout<<p->data<<endl;
        p=p->next1;
    }
};
int main() {
node *n1 = new node ;
node *n2 = new node ;
node *n3 = new node ;
node *n4 = new node ;
node *n5 = new node ;
n1->data=89;
n1->next1 = n2;
n2->data = 45;
n2 ->next1 =n3;
n3 ->data = 34;
n3->next1 = n4;
n4 ->data = 84;
n4->next1 = n5;
n5 ->data = 34;
n5->next1 = nullptr;
display(n1);



    return 0;
}