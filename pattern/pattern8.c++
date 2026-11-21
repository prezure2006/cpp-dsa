#include <bits/stdc++.h>
using namespace std;

int main() {
   int n; cin>>n;
   for(int i=0;i<n;i++){
    // space 
   for (int u=0;u<i;u++){
    cout<<" ";
   }
    //stars 
    for(int j = 2*n -(2*i+1);j>0;j--){
            cout<<"*";
        }
    //space 
    for (int u=0;u<i;u++){
    cout<<" ";
   }
    cout<<endl; 
   }

    return 0;
}