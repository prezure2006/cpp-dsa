#include <bits/stdc++.h>
using namespace std;

int main() {
  
    int n ;
     cin >> n ;
      vector <int > arr(n);
      for (int i =0;i<n;i++){
        cin >> arr[i];
      } 
       int start =-1;
       for (int i=0;i<n;i++){
        if (arr[i]==0){
            start = i;
            break;
        }
       }
       int end =start +1;
        int j=start;
       for (int i=end;i<n;i++){
           if (arr[i]!=0){
           swap(arr[j],arr[i]);
            j++;
       }

       }
       for(auto it : arr){
        cout<<it<<endl;
       }
        return 0;
}
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int n = nums.size();
//         int start = -1;
//         for (int i =0;i<n;i++){
//             if(nums[i]==0){
//                 start =i;
//                 break;

//             }

          
//         }
//          if (start == -1)
//                    return; 
//         int end = start+1;
//             int j = start;
//             for (int i=end ;i<n;i++){
//                 if (nums[i]!=0){
//                     swap(nums[j], nums[i]);
//                     j++;
//                 }
//             }
        
//     }
// };
