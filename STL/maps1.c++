#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mp;
    for (auto itr: mp.begin(); itr != mp.end(); itr++) {
        cin >> itr->first >> itr->second;
    }
    for (auto itr: mp.begin(); itr != mp.end(); itr++) {
        cout << itr->first << " " << itr->second << endl;
    }

    return 0;
}