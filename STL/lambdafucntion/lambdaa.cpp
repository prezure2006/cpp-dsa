#include <bits/stdc++.h>
using namespace std;
// The Use of lambda fucntion to cpature the surroundign variable

int main() {
//    int n =3 ;
//    auto mult = [n] (int x){
//     return n *x;
//    };
// cout<<mult(4);

// The question is sort the string form shortest to longest

vector<string> st = {"jpp","kpp22","mpp1"};
sort(st.begin(), st.end(), [] (const string &st1, const string &st2){
  return st1.size()>st2.size();
});
for(auto &s : st){
  cout<<s <<endl;
}
    return 0;
}