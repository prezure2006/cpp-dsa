#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // findind missing number
    int missing = 0;
    int repeating = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n - 1; j++)
        {

            if (array[j] == i)
            {
                cnt++;
            }
        }
        if (cnt == 2)
        {
            repeating = i;
        }
        if (cnt == 0)
        {
            missing = i;
        }
        if (missing != 0 && repeating != 0)
        {
            break;
        }
    }

    cout << '[' << missing << ',' << repeating << ']';

    return 0;
}
// time comp == O(n ^sq)
// Space comp == O(1)