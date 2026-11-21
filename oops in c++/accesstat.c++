//accesing static from private section
#include<iostream>  
using namespace std;
class customer {
    string name ;
    static int customernumber ;
    int acc_num , balance ;
    public
        :
       static void display_tot()
       {
              cout<<"total number of customers : "<<customernumber<<endl;
       }
    };
int customer::customernumber = 0;
int main (){

    customer a1;
    customer a2;
   customer a3;
//funtion to access static variable from private section
   customer::display_tot();
     return 0;
}