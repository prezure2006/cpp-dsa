#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int missing = -1;
    int repeating = -1;

    vector<int> array(n);
    vector<int> hasharray(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        hasharray[array[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hasharray[i] == 0)
            missing = i;

        else if (hasharray[i] == 2)
            repeating = i;
    }

    cout << "[" << missing << "," << repeating << "]";

    return 0;
}
// tc =O(2n)
// sc = O(n)
