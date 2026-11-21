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
        int a, b, c;
        cin >> a >> b >> c;
        int canidi = min(a, min(b, c));
        int ans = n - canidi;
        cout << ans;
    }

    return 0;
}