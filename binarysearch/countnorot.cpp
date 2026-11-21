#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 1, 2, 3};
    int min_ind = 0;
    int min_ele = arr[0];
    for (int i = 1; i < 8; i++)
    {
        if (arr[i] < min_ele)
        {
            min_ele = arr[i];
            min_ind = i;
        }
    }
    cout << "THe Array Has been Roatated " << min_ind << " Times";

    return 0;
}