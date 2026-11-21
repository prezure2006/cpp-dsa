#include <iostream>
#include <vector>
using namespace std;

// Multiply current result with x
void multiply(vector<int> &res, int x) {
    int carry = 0;

    for (int i = 0; i < res.size(); i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;   // store last digit
        carry = prod / 10;    // remaining carry
    }

    // store remaining carry
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> res;
    res.push_back(1);  // initial = 1

    for (int i = 2; i <= n; i++) {
        multiply(res, i);
    }

    // print in reverse
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }
}

int main() {
    int n ;
    cout<<"Enter n :\n";
    cin>>n;
    factorial(n);
    return 0;
}