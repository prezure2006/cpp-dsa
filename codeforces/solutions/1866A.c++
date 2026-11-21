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
        if (n == 1)
        {
            if (arr[0] > 0)
            {
                cout << arr[0] << endl;
            }
            else if

                (arr[0] < 0)
            {
                cout << -1 * arr[0] << endl;
            }
        }
        int sum = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 0 && sum > arr[i])
            {
                sum = arr[i];
            }
        }
        if (sum < 0)
        {
            cout << sum * -1;
        }
        else
        {
            cout << sum;
        }
    }

    return 0;
}