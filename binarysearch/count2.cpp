#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 1, 2, 3};
    int ind = 0;

    for (int i = 0; i < 4; i++)
    {

        if (arr[i] > arr[i + 1])
        {

            ind = i + 1;
        }
    }
    cout << ind;
    return 0;
}