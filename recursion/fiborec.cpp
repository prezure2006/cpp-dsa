#include <bits/stdc++.h>
using namespace std;
int fibrec(int n ){
    if (n<=1){
        return n ;
    }
    // return fibrec(n -1) + fibrec(n-2);
    int f1 =fibrec(n-1);
    int f2 = fibrec(n-2);
    return f1+f2;
}
int main() {
    int x ;
     cin >>x ;
    cout<<fibrec(x);

    return 0;
}