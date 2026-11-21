//record of all the balance in bank 
#include<iostream>  
using namespace std;
class customer {
    string name ;
    static int customernumber ;
    int acc_num , balance ;
     static int total_balance;
    public:
     customer(string n , int a , int b ){
         name = n ;
        acc_num = a ;
        balance = b ;
        customernumber++ ;
        total_balance += b ;
     }
     void display(){
         cout<<"name : "<<name<<endl;
         cout<<"account number : "<<acc_num<<endl;
         cout<<"balance : "<<balance<<endl;
         cout<<"customer number : "<<customernumber<<endl;
     }
    
        
       static void display_tot()
       {
         cout<<"total number of customers : "<<customernumber<<endl;
       
       }
         static void display_total_balance(){
              cout<<"total balance in bank : "<<total_balance<<endl;
         }
    };
int customer::customernumber = 0;
        int customer::total_balance = 0;
int main (){

    customer a1;
    customer a2;
   customer a3;
//funtion to access static variable from private section
   customer::display_tot();
     return 0;
}