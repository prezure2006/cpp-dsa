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
    long long sum_Arr = 0;   // sum of the array
    long long sum_Arrsq = 0; // sum of the array square
    long long sum_n2 = (n * (n + 1) * ((2 * n) + 1)) / 6;

    long long sum_n = (n * (n + 1)) / 2; // sum of n natural number
    for (int i = 0; i < n; i++)
    {
        sum_Arr = sum_Arr + array[i];
        sum_Arrsq = sum_Arrsq + ((long long)array[i] * (long long)array[i]);
    }
    long long val1 = sum_Arr - sum_n; // x-y
    long long val2 = sum_Arrsq - sum_n2;
    val2 = val2 / val1;              // x+y
    long long x = (val1 + val2) / 2; // repeating
    long long y = x - val1;          // missing
    cout << x << " " << y;
    return 0;
}
// time complexity = O(n);
// space complexity = O(1);