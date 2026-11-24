#include <bits/stdc++.h>
using namespace std;
// comparator for sort by legnth 
bool compByLen(string & a , string &b){
return a.size()>b.size();// descending order bcz the first element  should  be bigger than the second
}
int main() {
//  vector<string> words ={"King in The Jungle","I am a fighter", "I am A fukcing legend"};
//  sort(words.begin(), words.end(), compByLen);
//  for (auto &a :words){
//   cout<<a<<endl;
//  };
auto adding = [](string s ){// a basic string adding lambda fucntion
   return s = s+ "uullu";
 };
 cout<<adding("Ruchika ");

    return 0;
}