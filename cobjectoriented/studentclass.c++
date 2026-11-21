#include<iostream>
using namespace std;
class student 

{
   public:
    string name;
    int age ,roll_number;
    string grade;
    /* data */
};
int main (){
    student s1 ;
    s1.name = "John Doe";
    s1.age = 20;        
    s1.roll_number = 12345;
    s1.grade = "A";
    cout<<"Name: "<<s1.name<<endl;
    student s2;
    s2.name = "Jane Smith";
    s2.age = 22;
    s2.roll_number = 67890;
    s2.grade = "B";
    cout<<"Name: "<<s2.name<<endl;
     return 0;
}