// #include<iostream>
// using namespace std;

// int main (){
//     int arr[10] , i;
    
//     cout<<"Enter 10 numbers: "<<endl;
//     for (int i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     //selection sort
//     for(i=0;i<10-1;i++){
//         int index = i;
//         for (int j=i+1;j<10;j++){
//             if (arr[j]<arr[index]){
//                 index = j;
//             }
                
            
        
//         swap(arr[i],arr[index]);
//     }
// }// printing the sorted array
//     cout<<"Sorted array: "<<endl;
//     for (int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
     for (int i=0;i<=n-2;i++){
        int ind =i;
        for (int j=i;j<=n-1;j++){
            if (arr[j]<arr[ind]){
                ind =j;
            }
           
        }
         int temp = arr[ind];
            arr[ind] = arr[i];
            arr[i]= temp;

     }
     for (int i = 0; i < n; i++)
     {
        /* code */
        cout<<arr[i]<<endl;
     }
     

    return 0;
}