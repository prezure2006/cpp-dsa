#include <bits/stdc++.h>
using namespace std;
void one_n(int n , int target ){
    if (n>target){
        return;
    }
    cout<<n<<endl;
    one_n(n+1 , target);

}
int main() {
    int groiut;
    cin >>groiut;
    one_n(1, groiut);

    return 0;
}