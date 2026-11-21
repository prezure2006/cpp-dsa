#include <bits/stdc++.h>
using namespace std;

int main() {
    int m , n;
    cin>>m >>n;
int ans [m+n];
    int arr1[m];
    int arr2[n];
    cout<<"Enter First Array :"<<endl;
    for (int i =0;i<m;i++){
       cin>> arr1[i];
    }
     cout<<"Enter second Array :"<<endl;
     for (int i =0;i<n;i++){
       cin>> arr2[i];
    }
    //merge
    int i = 0, j = 0, k = 0;

while (i < m && j < n) {
    if (arr1[i] < arr2[j]) {
        ans[k] = arr1[i];
        i++;
    } else {
        ans[k] = arr2[j];
        j++;
    }
    k++;
}

while (i < m) {
    ans[k] = arr1[i];
    i++;
    k++;
}

while (j < n) {
    ans[k] = arr2[j];
    j++;
    k++;
}
for (int i= 0;i<m+n;i++){
cout<<ans[i]<<endl;
}


    return 0;
}