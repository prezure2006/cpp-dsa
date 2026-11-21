#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;

    string str;
    cin >> str;
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> hira; // reset for each i
        for (int j = i; j < n; j++)
        {
            hira[str[j]]++; // just add one character
                            // now calculate beauty directly

            int maxFreq = 0;
            int minFreq = INT_MAX;
            for (auto p : hira)
            {
                maxFreq = max(maxFreq, p.second);
                minFreq = min(minFreq, p.second);
            }
            int beauty = maxFreq - minFreq;
            sum += beauty;
        }
    }
    cout << sum;
    return 0;
}
