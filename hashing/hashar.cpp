#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);    // Read from input.txt
    freopen("output.txt", "w", stdout);  // Write to output.txt

    int n;
    cout << "Enter N :" << endl;
    cin >> n;
    int arr[n];
    cout<<"enter the array elements "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    //pre compute
    int hash [13] ={0};
    for (int i =0;i<n ; i++){
        hash[arr[i]] +=1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        //fetching 

        cout<<hash[number]<<endl;
    }
    
    return 0;
}