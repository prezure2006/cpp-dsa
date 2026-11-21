#include<iostream>
using namespace std;
struct student 

{
    string name;
    int age ,roll_number;
    string grade;
    /* data */
};

int main (){
    student s1;
    s1.name = "John Doe";
    s1.age = 20;
    s1.roll_number = 12345;
    s1.grade = "A";
        
     return 0;
}