
#include <bits/stdc++.h>
using namespace std;

int main() {
int n ;
cin>>n ;

    while (n--){
int water_cnt =0;
int no_cell ;
string cells;
cin>>no_cell;
cin>>cells;


for (int i =0;i<no_cell;i++){
if(i+2<no_cell){
    if(cells[i]=='.' && cells[i+1]=='.'&&cells[i+2]=='.'){
        water_cnt =2;
        
        break;
    }
}
     if(cells[i]=='.'){
    water_cnt +=1;
    }

}



cout<<water_cnt<<endl;


}




 return 0;


    }



   