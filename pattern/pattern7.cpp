   #include <bits/stdc++.h>
   using namespace std;
   
   int main() {
     int n ;cin>> n;
     for (int i=0;i<n;i++){
        //space
          for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
       
        //star
        for(int j = 0;j<(2*i)+1;j++){
            cout<<"*";
        }
        

        //space
         for (int u=0;u<n-i-1;u++){
            cout<<" ";
        }
        cout<<endl;
     }
   
       return 0;
   }