#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int left = 1;
    int right = x / 2;
    int ans = 0;
    if (x < 2)
    {
        ans = x;
    }
    else
    {
        while (left <= right)
        {
            long long mid = left + (right - left) / 2;
            if ((long long)mid * mid <= x)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    cout << ans;

    return 0;
}