#include<iostream>
using namespace std;
class cons {
    public: 
   
    int age;
 
   int *id;
   cons(int a, int b){
    age =a ;
    id=new int;
    *id = b;
       cout<<"constructor called"<<endl;
   }
   void display(){
    cout<<"age : "<<age<<endl;
    cout<<"id : "<<*id<<endl;
   }
   ~cons(){
    cout<<"destructor called"<<endl;
    delete id;
   }
};
int main (){
    
     return 0;
}