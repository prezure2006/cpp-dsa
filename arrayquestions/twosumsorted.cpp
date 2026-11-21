#include <bits/stdc++.h>
using namespace std;
// not works 
int main() {
    int n ;
     cin >>n;
     vector <int > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target ;
    cin >> target;
   int i = 0;
int j = n - 1;

while (i < j) {
    int sum = arr[i] + arr[j];

    if (sum == target) {
        cout << i << " " << j;
        return 0;
    }
    else if (sum < target) {
        i++;
    }
    else {
        j--;
    }
}
    return 0;
}