#include <bits/stdc++.h>
using namespace std;
void name_ret(int n1 , int n2){
    if(n1>n2){
        return ;

    }
    cout<<"CHUUT"<<endl;
    name_ret(n1+1 , n2);// we cant return justr call this fucntion 
}






int main() {
    
    name_ret(1, 6);

    return 0;
}