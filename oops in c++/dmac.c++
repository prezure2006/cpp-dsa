#include<iostream>
using namespace std;
class student {
    public: 
    char name[50];
    int age;
   int grade;
   int id;
};
int main (){
    student *a1= new student;
    (*a1).age =19;
    cout<<(*a1).age<<endl;
    a1->age = 20;
    cout<<a1->age;
     return 0;
}