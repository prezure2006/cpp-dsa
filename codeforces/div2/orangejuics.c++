#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        double ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = ans + arr[i];
        }
        cout << ans / n;
    }

    return 0;
}