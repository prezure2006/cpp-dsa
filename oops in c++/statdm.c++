#include<iostream>
using namespace std;
class customer {
    string name ;
    int acc_num , balance ;
   
     public:
      static int customernumber;
     customer(string n , int a , int b ){
         name = n ;
        acc_num = a ;
        balance = b ;
        customernumber++ ;
     }
     void display(){
         cout<<"name : "<<name<<endl;
         cout<<"account number : "<<acc_num<<endl;
         cout<<"balance : "<<balance<<endl;
         cout<<"customer number : "<<customernumber<<endl;
     }
     void disp_total(){
         cout<<"total number of customers : "<<customernumber<<endl;
     }
};
int customer::customernumber = 0;
int main (){

    customer a1("sachin", 12345, 10000);
    customer a2("sachin", 12345, 10000);
   customer a3("sachin", 12345, 10000);

   a1.display();
   a2.display();
   a3.display();
   customer::customernumber =5;
   a1.disp_total();
     return 0;
}