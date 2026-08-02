#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int ans =0;
  vector <int> brr (n);
  for (int i =0;i<n;i++){
    cin>> brr[i];
  }
  for (int i=0;i<n;i++)
  ans = ans^brr[i];

cout<<ans;
    return 0;
}