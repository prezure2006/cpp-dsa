#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
    cin >> t;
vector <int > bura(t);

 vector<int> bura(t);
for (int i = 0; i < t; i++) {
    cin >> bura[i];
}
int maxSum = INT_MIN;

for (int i = 0; i < t; i++) {
    for (int j = i; j < t; j++) {

        int sum = 0;

        for (int k = i; k <= j; k++) {
            sum += bura[k];
        }

        maxSum = max(maxSum, sum);
    }
}

cout << maxSum;
    

    return 0;
}