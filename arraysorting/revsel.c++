#include<iostream>
using namespace std;

int main (){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array :\n";
    cin>>n;
    cout<<"Enter your Array :\n";
    for (  int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
    
    for (int i = 0 ; i < n;i++)
    {
        int index =i;
        for (int j =i+1;j<n;j++)
    {
        if (arr[j]<arr[index])
        {
            swap(arr[j],arr[index]);
        }
        
    }
    }
    for (int i = 0 ; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
     return 0;
}   