#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int noofdoc;
        int ops;
        cin >> noofdoc >> ops;
        vector<int> opuu;
        while (ops != 0)
        {
            int k = ops % 10;
            opuu.push_back(k);
            ops = ops / 10;
        }
        int ans1 = 0;
        vector<int> ans2;
        for (int i = 0; i < noofdoc; i++)
        {
            if (opuu[i] = 2 && i == 0)
            {
                ans2.push_back(i + 1);
            }
            if (opuu[i] == 1 && opuu[i + 1] == 2)
            {
                ans1++;
                ans2.push_back(i + 2);
            }
            else if (opuu[i] == 1 && opuu[i + 1] == 3)
            {
                ans2.push_back(i + 1);
                ans1++;
            }
        }
        cout << ans1 << endl;
        for (int i = 0; i < ans2.size(); i++)
        {
            cout << ans2[i] << " ";
        }
    }

    return 0;
}