#include <bits/stdc++.h>
using namespace std;
// in unordered map pairs dont work as a key
int main() {
    map<pair<int, int> , int> mpp;
    mpp[{2,3}] =89;
    pair<int, int> p1 , p2 ;
    p1 ={2,3};
    p2={3,4};
    cout<<(p1<p2)<<endl;
    cout<<mpp[{2,3}];

    return 0;
}