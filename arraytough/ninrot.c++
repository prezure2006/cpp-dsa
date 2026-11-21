#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n][n];
    int ans[n][n];
    for (int i =0;i<n;i++){
        for (int j=0;j<n;j++ ){
            cin>>arr[i][j];
        }
        
    }
    for (int i =0;i<n;i++){
       for (int j =0;j<n;j++)
        {
          ans[j][n-1-i] =  arr[i][j ];
        }
    }
    for (int i =0;i<n;i++){
      for  (int j =0;j<n;j++)
        {
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}