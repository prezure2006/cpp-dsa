#include <bits/stdc++.h>
using namespace std;
int fact (int n ){
    if (n==0||n==1){
        return 1 ;
    }
    return fact(n *n-1);
}
int main() {
int lund =6;
cout<<fact(lund);

    return 0;
}