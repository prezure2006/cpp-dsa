
#include <bits/stdc++.h>
using namespace std;

int main() {
    //decleration cp
  vector <int> h={9,6,4,3,2,2,3};
  cout<<h[4]<<endl;
  int n ; 
  cin >>n;
  //dynamically taking 
  vector<int> dog(n) ;
  for (int i = 0 ; i< n;i++){
    cin>>dog[i];
  }

  //printing through loop
  for (int i = 0 ; i< n;i++){
    cout<<dog[i];
  }
  // Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print vector elements of strings 
for (string car : cars) {
  cout << car << "\n";
}
// Get the first element
cout << cars.front()<<endl;

// Get the last element
cout << cars.back()<<endl;
// Get the second element
cout << cars.at(1);

// Get the third element
cout << cars.at(2);
// Throws error message 
cout <<cars.at(6);
// Change the value of the first element
cars[0] = "Opel";

cout << cars[0];  // Now outputs Opel instead of Volvo
// addingvecotr elements 
cars.push_back("Tesla");
//removes the end element 
cars.pop_back();// Tesla 
// size of the vector cars 
cout << cars.size();
cout << cars.empty();  // Outputs 1 (The vector is empty)

    

    return 0;
}
