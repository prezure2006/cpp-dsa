#include <bits/stdc++.h>
using namespace std;


void merge( int arr[],int low1 ,int mid1,int high1){
   vector <int> temp;
    int left =low1;
    int right =mid1+1;
    while (left<=mid1 && right<=high1){
        if (arr[left]<=arr[right]){
            temp.push_back(arr[left]);
             left++;
    } else {
        temp.push_back(arr[right]);
        right++;
    }
    
        }
        while (left<=mid1 ){
            temp.push_back(arr[left]);
            left++;
        }
        while (right<=high1){
                temp.push_back(arr[right]);
                right++;
        }
        for (int i =low1;i<=high1;i++){
                 arr[i] = temp[i - low1];
        }
        
        
    }
    void mergesort(int arraye[],int low, int high){
if(low >=high)

return ;
int mid = (low+high)/2;
mergesort(arraye,low,mid);// left half
mergesort(arraye,mid+1,high);// right half 
merge(arraye ,low, mid, high);//merge mfs

}

int main() {
    int n;
    cin>> n;
    int low=0;
    int high =n-1;
     
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,low,high);
    for (int i = 0; i < n; i++)
    {
    cout << arr[i] << " ";
    }
    

    return 0;
}