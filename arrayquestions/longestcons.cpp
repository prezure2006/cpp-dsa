#include <bits/stdc++.h>
using namespace std;

int main() {
     int n ;
     cin>>n;

    vector<int > arr(n);
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int longest =1;
    int curremin =INT_MIN;
    int currcnt =0;
    for (int i =0;i<n;i++){
        if(arr[i]-1 == curremin){
            currcnt = currcnt+1;
            curremin = arr[i];
        }else if(arr[i] != curremin){
            currcnt =1;
            curremin = arr[i];
            
        }
        longest = max (longest,currcnt);

    }
    cout<<longest;

    return 0;
}