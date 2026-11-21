#include <bits/stdc++.h>
using namespace std;
void nto1(int n ){
    if (n == 0){
        return;
    }
    
    nto1(n-1);
    cout<<n<<endl;
}
int main() {
   
nto1(7);
    return 0;
}