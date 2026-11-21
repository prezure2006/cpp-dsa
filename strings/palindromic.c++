#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string ans;
    int n = s.size() - 1;
    for (int i = n; i >= 0; i--)
    {
        ans.push_back(s[i]);
    }
    if (ans == s)
        return true;
    return false;
}

int main()
{
    string h;
    cin >> h;

    string result = ""; // outside both loops

    for (int i = 0; i < h.size(); i++)
    {
        for (int j = i; j < h.size(); j++)
        {
            string subs = h.substr(i, j - i + 1);                  // get substring
            if (isPalindrome(subs) && subs.size() > result.size()) // check
            {
                result = subs; // update longest
            }
        }
    }

    cout << result << endl;
 
    return 0;
}