#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> &crr, int i1, int m, int k)
{
    int n = crr.size();
    int noofb = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (crr[i] <= i1)
        {
            cnt++;
        }
        else
        {
            noofb += (cnt / k);
        }
        if (noofb >= m)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    int min =   INT_MAX;
    

    vector<int> arr(n);
    for (auto &a : arr)
    {
        cin >> a;
    // }
    // for (auto &a : arr)
    // {
    //     cout << a << " ";
    // }
    for (int i=0;i<n;i++){
        
    }

    return 0;
}