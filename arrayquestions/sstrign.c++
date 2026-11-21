#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n;
        string stru;
        cin>>n;
        cin>>stru;
        int count =0;
       
    if (stru[0] == 'x')
    count++;

  if (n > 1 && stru[n - 1] == 'x')
    count++;

cout << count << endl;
        
    
}
 

    return 0;
}