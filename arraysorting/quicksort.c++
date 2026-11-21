#include <bits/stdc++.h>
using namespace std;
int partition1(int arr [], int low , int high){
int pivot = arr[low];
int left = low ;
int right = high;
while (left < right){
while (arr[left]<=pivot &&left<=high-1 ){
    left++;
}
while(arr[right]>pivot && right>=low+1) {
right --;
}
 if (left < right) {
        swap( arr[left],arr[right]);
    }
  
}
  swap(arr[low],arr[right]);
    return right;


}
void quicksort(int arr[], int low , int high) {
    if (low>=high){
        return;
    }
    int pindex = partition1(arr , low , high);
    quicksort(arr, low , pindex-1);//left subarray
    quicksort(arr,pindex+1,high);//right subarray
}

int main() {
    int low =0;
    
    int n;
    cin >> n;
    int high = n-1;
     int arr[n];
     for (int i =0;i<n ;i++){
     cin >> arr[i];
     }
     quicksort(arr, low , high);
     for(int i =0;i<n ;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}
