#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>> n;
    int k ;
     cin>>k;
    vector <int > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left =0, right =0;
    int lenmax =0;
    int sum =arr[0];

    while (right<n) {
        while(left<=right &&sum > k){
            sum = sum - arr[left];
            left ++;
        }
        if (sum == k){
            lenmax = max(lenmax, right - left +1);
        }
        right++;
        if (right<n){
            sum = sum + arr[right];
        }
        
    }
    cout<<"Length of the longest subarray with sum "<<k<<" is : "<<lenmax<<endl;

    return 0;
}