#include <bits/stdc++.h>
using namespace std;
// We can find that if a no exist in this array and till a specfic index how many
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
// in this question we are making count of a specific number like we have an array of real numbers between 1-10 we can make a pref count of that specific element
   int arr[5]= {3,6,7,3,4};// count for 3 
   int target =3;
   int pref[5]={0};
   for (int i =0;i<5;i++){
    if(i == 0){
      if(arr[i]==target){
        pref[i]++;
      }
    }else{
      if(arr[i] == target){
        pref[i]=pref[i-1]+1;
      }else{
        pref[i] =pref[i-1];
      }
    }
   }
for (int &num : pref){
  cout<< num<<endl;
}
    return 0;
}