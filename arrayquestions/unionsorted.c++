// union of two sorted array means a =[ 1, 2 3 4,5], b = [3 ,4,5,6,7,8]
//a union b  =[1,2,3,4,5,6,7,8] every unique element of A and B
// first apporach is th=o solve with sets 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin>> n1 >> n2;
    vector <int> arr1(n1);
    vector <int> arr2(n2);
  set <int> unique ;
  // First Array
  for (int i=0;i<n1;i++){
    cin >> arr1[i];
  }
  // Second Array
  for (int i=0;i<n2;i++){
    cin >> arr2[i];
  }// first insertion
  for( auto it : arr1){
    unique.insert(it);
  }// second insertion
   for( auto it : arr2){
    unique.insert(it);
  }
  // Print 
   for( auto it : unique){
    cout<<it<<endl;
   
  }

    return 0;
}