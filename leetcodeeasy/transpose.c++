#include <bits/stdc++.h>
using namespace std;

int main() {
    int i1;
    int j2 ;
    
    cin>>i1 >> j2;
    int arr[i1][j2];
    int ans [j2][i1];
    for (int i=0;i<i1;i++){
        for (int j = 0;j <j2;j++){
            cin >>arr[i][j];

        }
       
      }
        // transpose 
          for (int i=0;i<i1;i++){
        for (int j = 0;j <j2;j++){
    ans[j][i] = arr[i][j];
      }
    }
      
      for (int i=0;i<j2;i++){
        for (int j = 0;j <i1;j++){
      cout<<ans[i][j];
    }
     cout<<endl;

  
}
    return 0;
  }
