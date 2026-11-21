#include <bits/stdc++.h>
using namespace std;

int main() {
   int n ;
    cin >>n ;
   unordered_set  <string> rand1 ;
    for (int i=0;i<n;i++){
        string  wa;
        cin >> wa;
        rand1.insert(wa);

    }
    for (auto it : rand1 ){
        cout<<it <<endl;
    }
    // fidning fuckign shit in sets 
    int q; cin>> q;

    while (q--){
         string str ; cin >> str;
        
        if (rand1.find(str) == rand1.end()){
            cout<<"no\n";
        }
    else {
        cout<<"Yes\n";
    }
}

    return 0;
}