#include <bits/stdc++.h>
#include <iterator>
using namespace std;

int main() {
    // iterator point tothe address
    vector<int> ut ={23,34,23,2,4,43} ;
    for(int i =0;i<ut.size();i++){

        cout << ut[i]<<endl;
    }
    vector<int> :: iterator it = ut .begin();
    cout<<*it;
    cout<<*it;
    cout<<*(it+1);// next elemnt 
    for (it = ut.begin() ; it !=ut.end();++it){
        cout<<*it<<endl;
    }
    for ( int &g : ut) {// accesses the address 

        cout<<g;
    }
    auto a =1;// dyanmicallt determine datatype
    



    return 0;
}