#include<iostream>
using namespace std;
class daku{
   
    string name ;

    int age;
  
   int id;
    public:
    daku(string name, int age,int id){
        this->name = name;
        this->age = age;
        this->id = id;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"id : "<<id<<endl;
    }
};
int main (){
    daku e1("prasheel",19,123);
    e1.display();
     return 0;
}