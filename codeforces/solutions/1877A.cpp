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
        int sum = 0;

        vector<int> a(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        if (sum > 0)
        {
            cout << (sum * -1) << endl;
        }
        else
        {
            cout << abs(sum) << endl;
        }
    }

    return 0;
}