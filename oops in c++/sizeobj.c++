#include<iostream>
using namespace std;
class sizeobj {
    public:
    
   int id;
   char name;
   
   double salary;

};
int main (){
    cout<<"size of object is "<<sizeof(sizeobj);
     return 0;
}