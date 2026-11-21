#include <bits/stdc++.h>
using namespace std;

int main() {
  

    int t;
    cin >> t;
    // input
vector <int > grr(t);
//input
for (auto &it : grr){
    cin >> it;
}
sort(grr.begin(),grr.end());
// printing
for (auto it : grr){
    cout<< it;
}


   

    return 0;
}