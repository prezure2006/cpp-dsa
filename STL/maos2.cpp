#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map <char ,int > mp;
    int n ;
    for (int i=0;i<26;i++){
        char ch = 'a'+i;
        mp[ch] = i+1;
    }
    for (auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }   

    return 0;
}