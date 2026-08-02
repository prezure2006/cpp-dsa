#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int seclar = INT_MIN;
    int secsmal =INT_MIN;
     for (int i =0;i<t;i++){
        if (t==1){
            smallest = arr[i];
        }
        else if (arr [i]<smallest ){
            smallest =arr[i];
        }

    }
    for (int i =0;i<t;i++){
        if (t==1){
            largest = arr[i];
        }
        else if (arr [i]>largest ){
            largest =arr[i];
        }

    }
    for(int i =0;i<t;i++){
if(arr[i]<largest && arr[i]>seclar){
    seclar = arr[i];
}
    }
    cout <<"the largets ele :"<<largest<<endl;
    cout<<"the smallest ele:"<<smallest<<endl;
    cout<<"the second largets ele :"<<seclar<<endl;
    


    

    return 0;
}