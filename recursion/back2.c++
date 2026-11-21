#include <bits/stdc++.h>
using namespace std;
void nto1back(int j , int target1){
    if (j>target1 ){
        return ;

    }
    nto1back(j+1,target1);
    cout<<j<<endl;
}
int main() {
    int n = 1; 
    int target;
    cin>> target ;
nto1back(n, target);

    return 0;
}