#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
     int ind = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
       
    }
    for (int i = n - 2; i >= 0; i--)
    {

        if (arr[i] > arr[i - 1])
        { // ex {1,2,3} 2<3 never

            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
        return 0;
    }
    for (int i=n-1;i>ind;i++){
        if (arr[ind]<arr[i]){
            swap(arr[ind],arr[i]);
        }
    }

    return 0;
}