//this solution only works with the positive lements 
//with a tc of O(n)
//SC of O(maxi)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans =0;
    int n;
     cin>>n;
      int arr[n];
     for (int i =0;i<n;i++){
        cin >> arr[i];

     }
    int maxi= arr[0];
    for (int i=0;i<n;i++){
        maxi =max(maxi , arr[i]);
    }
    int hash [maxi+1] ={0};
    
    
    for (int i=0;i<n ;i++){
        hash[arr[i]]++;
        
    }
    // for (int i=0;i<=maxi;i++){
    //     cout<<hash[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1){
            ans = arr[i];
            break;
        }
    }
    cout<<ans;


    return 0;
}