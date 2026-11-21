#include <bits/stdc++.h>
using namespace std;
int possible(vector<int> harr, int k)
{
    int day = 1;
    int load = 0;
    for (int i = 0; i < harr.size(); i++)
    {
        if (load + harr[i] > k)
        {
            day = day + 1;
            load = harr[i];
        }
        else
        {
            load += harr[i];
        }
    }
    return day;
};
int main()
{
    int n;
    cin >> n;
    int days;
    cin >> days;
    int ans = -1;
    vector<int> weights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    int maxele = *max_element(weights.begin(), weights.end());
    long long sum = accumulate(weights.begin(), weights.end(), 0LL);
    for (int j = maxele; j <= sum; j++)
    {
        int dayreq = possible(weights, j);
        if (dayreq <= days)
        {
            ans = j;
            break;
        }
    }
    cout << ans;

    return 0;
}