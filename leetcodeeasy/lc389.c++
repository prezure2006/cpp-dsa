#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    string t ;
     cin >> s >> t;
     //approach map tc -> O(n) sc -> O(n)

    // map <char , int > mpp;
    // for (char ch : s){
    //     mpp[ch]++;
    // }
   
    // for (char ch : t){
    //     mpp[ch]++;
    // }
    // for (auto it : mpp) {
    //      if (it.second == 1) { cout << it.first; break;
    //      }
    
    

    //     }
    //approach 2nd -> xor operation 
   // tc-> O(n), sc-> O(1)
    // int ans =0;
    // for (auto ch : s){
    //     ans = ans ^ch;
    // }
    //  for (auto ch : t){
    //     ans = ans ^ch;
    // }
    // cout<<char(ans) ;
    //aapproach 3rd -> asciisum
    int sum_s =0;
    int sum_t =0;
    
    for (auto fr: s){
        sum_s = sum_s + fr;
    }
    for (auto fr: t){
        sum_t = sum_t + fr;
    }
    int ans =sum_t-sum_s;
    cout<<char(ans);
    return 0;

        }
