//printing all the sub arrays 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int kullu ;
    cin>>kullu;
    int n;
    cin >> n;
    int maxlen =0;
    

    vector<int> lar(n);

    for (int i = 0; i < n; i++) {
        cin >> lar[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum =0;
            for (int k = i; k <= j; k++) {
                
                sum= sum+lar[k];

                
            }
           if(sum==kullu){
            maxlen = max(maxlen,j-i+1);
           }
            
        }
    }
    cout<<maxlen;

    return 0;
}