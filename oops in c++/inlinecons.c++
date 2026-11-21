#include<iostream>
using namespace std;
class inlet{
    public:
    string name;
    int age;
    int grade;
    int id;
    inlet(string name, int age, int grade, int id): name(name), age(age), grade(grade), id(id) {}
        
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"grade : "<<grade<<endl;
        cout<<"id : "<<id<<endl;
    }
};
int main (){
    inlet e1("prasheel",19,85,123);
    e1.display();
     return 0;
}