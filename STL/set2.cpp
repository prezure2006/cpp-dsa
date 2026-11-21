#include <bits/stdc++.h>
using namespace std;

int main() {
   set <int > pras;
   pras.insert(3452343);// one sinle element can be inserted 
  auto it = pras.find(3452343);
  cout<<*it;
  cout<<endl;
  set<string> rand;
  rand.insert("randikabaccha");
  auto it1 = rand.find("randikabacch1a");
  rand.insert("aadamkhor");
  if (it1!=rand.end()){
cout<<*it1;
  }

  cout<<*it1;
  cout<<endl;
  for (auto it3 : rand){
    cout<<it3<<endl;
  }
  cout<<pras.size();
  rand.erase("aadamkhor");
  cout<<rand.size();

    return 0;
}