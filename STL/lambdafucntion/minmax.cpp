#include <bits/stdc++.h>
using namespace std;
// finding minimum and max elements using algorithms
// all the below fucntion works on O(n);
// it just decrease the code lines
int main() {
  vector<int> vp ={4,5,6,7,7,4};
  cout<<*min_element(vp.begin(), vp.end())<<endl;// min_element() returns an iterator not the element itelf so with & we get address with * we get the lemnt itself
  cout<<*max_element(vp.begin(), vp.end())<<endl;
  cout<<accumulate(vp.begin(), vp.end(),0)<<endl;// sum of all the elements 
cout<<count(vp.begin(), vp.end(),5)<<endl;// count of  a specific element 
// cout<<*find(vp.begin(), vp.end(), 67);// returns and iterator fi the no is present it will print the no else it will print randim no
  auto it  = find(vp.begin(), vp.end(),0);
  if(it != vp.end())
  cout<<*it<<endl;
  else 
  cout<<"Element not found"<<endl;
  reverse(vp.begin(), vp.end());
  for (auto &v :vp){
  cout<<v<<endl;
  }
    return 0;
  
}