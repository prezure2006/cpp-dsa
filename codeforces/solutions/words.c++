#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string st;
        cin >> st;
        if (st.length() > 10)
        {
            st = st[0] + to_string(st.length() - 2) + st[st.length() - 1];
        }
        cout << st << "\n";
    }

    return 0;
}