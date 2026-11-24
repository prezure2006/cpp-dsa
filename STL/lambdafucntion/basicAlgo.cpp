#include <bits/stdc++.h>
using namespace std;

int main() {
   //all of this is like And in boolean algebra
   vector<int> v ={3,4,5};
   bool duu = all_of(v.begin(), v.end(),[](int x){
    return x > 0;

   });
   // any_of - This is like or in boolean alg
   bool cuu = any_of(v.begin(), v.end(),[](int x){
    return (x/2)%2 == 0;

   });
   // none_of this is like not in boolean algebra
   bool cura = none_of(v.begin(), v.end() , [](int x ){
    return x*x == 0;
   });
   if(duu){cout<< "Prasheel Will become a senior Ai engineer at google in 2033";
  }
  if(cuu){
    cout<< "King";
  }
  if(cura){
    cout<<"Duck";
  }

    return 0;
}