#include <bits/stdc++.h>
using namespace std;

int main() {
int n ;
cout<<"Enter No of Elements"<<endl;
 cin >> n ;
 int sum_arr =0;
 int sum_n =0;
 for(int i=1;i<=n;i++){
    sum_n = sum_n+i;
}

cout<<"Enter the Input array:"<<endl;
vector <int> frr(n-1);
for (int i=0;i<n-1;i++){
    cin>> frr[i];
}
for (int i =0;i<n;i++){
    sum_arr = sum_arr + frr[i];
}

int missing_no = sum_n - sum_arr;
cout<<"the Missing Element is :"<<endl<<missing_no;





 return 0;

}
//  int ans =0;
  

//     int arr[n];
//      for (int i =0;i<n;i++){
//         cin>>arr[i];
//      }int j =0;
//      for (int i =1;i<=n;i++){
//         if (arr[j]!=i){
//         ans = ans+i;
//         break;
//         }else{
//          j++;
//         }

//      }
//      cout<<ans;
   