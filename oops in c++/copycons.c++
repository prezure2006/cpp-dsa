#include<iostream>
using namespace std;
class cons {
   
public  :
    string name ; 
    int age;
   int grade;
   int id;
   public:
   

  
    
   
   cons(string f , int b ,char c,int d){
    name = f;
    age = b;    
grade = c;
id = d;

   }

 cons (cons &b){
    name = b.name;
    age = b.age;    
grade = b.grade;
    id = b.id;
}
   void display(){
    cout<<"name : "<<name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"grade : "<<grade<<endl;
    cout<<"id : "<<id<<endl;
   }
};



int main (){
    cons c1 ("prasheel ",19,'A',123);
    cons c2("hari",233,'a',199927);
    c1.display();
    c2.display();
    cons c3(c2);
    c3.display();
     return 0;
}