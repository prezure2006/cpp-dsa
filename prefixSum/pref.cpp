#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int target = 3;
   int neww[4]={2,3,3,5};
   int pref[4] ={0};
   for (int i =0;i<4;i++){
    if(i == 0){
      pref[i] =neww[i];
    }else{
      pref[i]= pref[i-1]+neww[i];
    }
   }
   cout<<"The Normal Array "<<endl;
   for(int &num :neww){
    cout<<num<<endl;
   }
    cout<<"The Prefix Array "<<endl;
   for(int &num :pref){
    cout<<num<<endl;
   }
  // TC  -O(n)
//  SC - O(1)
    return 0;
}