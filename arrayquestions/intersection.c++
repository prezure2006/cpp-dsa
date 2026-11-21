#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>> m >> n;
    int arr1[m];
    int arr2[n];
    vector<int> ans;
    int visrr[min(m,n)] ={0};
    for (int i =0;i<m;i++){
      
        cin>> arr1[i];
    }
    for (int i =0;i<n;i++){
          cin>> arr2[i];
    }
    for (int i =0;i<m;i++){
        for (int j=0;j<n;j++){
            if (arr1[i]==arr2[j]&& visrr[j] ==  0){
                ans.push_back(arr1[i]);
                visrr[j] = 1;
                break;
            }
            if(arr2[j]>arr1[i]){// the condition where no common elements is present because it is a ssorted array
                break;
            }
        }
    }
   for (int x : ans) {
        cout << x << " ";
    }
    


    return 0;
}