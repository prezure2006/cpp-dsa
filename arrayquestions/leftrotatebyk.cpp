#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int st , int end){
    while (st<end){
        swap(arr[st],arr[end]);
        st++ ;
        end--;
    }

}

int main() {
    int n ;
      int d ; 
     cin >> n ;
   
     cin>>d ;
     if (d>n )
     d = d%n;
     

    int arr[n];
    for (int i =0;i<n;i++){
        cin>> arr[i];
    }

    cout<<"Not Left Shifted"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<< " "<<endl;
    }

cout<<" Left Shifted"<<endl;
    reversearray(arr, 0 , d-1);
    reversearray(arr ,d , n-1);
    reversearray(arr ,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<< " "<<endl;
    }

    
    

    return 0;
}