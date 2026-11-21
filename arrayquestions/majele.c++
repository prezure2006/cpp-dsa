#include <bits/stdc++.h>
using namespace std;

int main() {int n ; cin>> n;
    vector <int>arr(n);
  unordered_map<int,int> mpp;
  for (int i=0;i<n;i++){
    mpp[arr[i]]++;
  }
     for (auto& pair : mpp) {
            if (pair.second > n / 2) {
                cout<< pair.first;
                return 0;
            }
        }
        cout<<-1;

  

  
    

    return 0;
}