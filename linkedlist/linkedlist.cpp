#include <bits/stdc++.h>
using namespace std;
struct node {
    int n ;
    node *next1;
};


int main() {
    node *p1 = new node;
    p1->n = 45;
    p1->next1 = nullptr;
  
   node n1 ,n2,n3,n4; 
   n1.n= 34;
   n1.next1 = &n2;
cout<<n1.n;

n2.n =78;
n2.next1 =&n3;
n3.n = 89;
n3.next1 =nullptr;
cout << n1.next1->n;
    return 0;
}