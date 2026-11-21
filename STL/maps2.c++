#include <bits/stdc++.h>
using namespace std;
// An unordered maps sotred the last assingned value for the previous elements 

int main() {
    int n;
     cin >>n;
  unordered_map <int , int > rand ;
  

 for(int i = 0; i < n; i++) {
    int key, value;
    cin >> key >> value;
    rand[key] = value;
}
for (auto it: rand){
    cout<<it.first << "-->"<<it.second<<endl;
}
    return 0;
}