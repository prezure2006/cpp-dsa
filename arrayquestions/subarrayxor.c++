#include <bits/stdc++.h>
using namespace std;

int main() {
    int rand ; cin >>rand;
    int n; cin>> n;
    int ans_cnt=0;
    int arr [n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
                          }
        //prefix xor 
        for (int i=0;i<n;i++){
            for (int j=i;j<n;j++){
                int xor1 =0;
                for (int k = i; k <= j ; k++){
                    xor1 = xor1 ^ arr[k];

                }
                if (xor1 ==rand){
                    ans_cnt++;
                }
            }
            }
        
         cout  <<  ans_cnt;



    return 0;
}