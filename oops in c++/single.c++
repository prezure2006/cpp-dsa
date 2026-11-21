#include<iostream>
using namespace std;
class human {
    protected:
    string name ;
    int age; ;
    public:
    
     void display1(){
        cout<<"i work here "<<endl;
     }
};
class student : public human {
    int roll , marks ;
    public:
    student (string n , int a , int r , int m ){
        name = n ;
        age = a ;
        roll = r ;
        marks = m ;
    }
     void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"roll number : "<<roll<<endl;
        cout<<"marks : "<<marks<<endl;
     }
};
int main (){
    student s1("Alice", 20, 101, 85);
    s1.display();
    s1.display1(); // Accessing the method from the base class
     return 0;
}
