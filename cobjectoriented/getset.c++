#include<iostream>
using namespace std;
class student 

{
    private:
    string name;
    int age ,roll_number;
    string grade;
    /* data */public:
    void setName(string n){
        name = n;
    }
    void setAge(int a){
        age = a;
    }
    void getName(){
        cout<<name<<endl;
    }
};
int main (){
    student s1 ;
    s1.setName("John Doe");
    s1.setAge(20);  
    s1.getName();

     return 0;
}