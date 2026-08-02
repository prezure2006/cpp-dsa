#include <bits/stdc++.h>
using namespace std;

int main() {
    int k ; cin>> k;
    long long sum =0;
    int n ; cin>>n;
    vector <int >arrayin(n);
    for (int i=0;i<n;i++){
        cin>> arrayin[i];
    }

    int maxlen=0;

    map <long long , int > presum;
    for (int i=0;i<n;i++){
        sum = sum +arrayin[i];
        if (sum == k){
            maxlen =max(maxlen,i+1);
        }
        long long rem = sum-k;
        if(presum.find(rem)!= presum.end()){
            int len = i-presum[rem];
            maxlen =max(maxlen,len);
        }
           if (presum.find(sum) == presum.end()) {
            presum[sum] = i;
        }
    }
    cout <<maxlen;

    return 0;
}