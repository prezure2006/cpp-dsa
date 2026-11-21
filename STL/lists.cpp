#include <bits/stdc++.h>
using namespace std;

int main() {
    // Create a list called cars that will store strings
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print list elements
for (string car : cars) {
  cout << car << "\n";
}

// Get the first element
cout << cars.front()<<endl;  // Outputs Volvo

// Get the last element
cout << cars.back()<<endl;  // Outputs Mazda
// Change the value of the first element
cars.front() = "Opel";

// Change the value of the last element
cars.back() = "Toyota";


cout << cars.front()<<endl; // Now outputs Opel instead of Volvo
cout << cars.back()<<endl;  // Now outputs Toyota instead of Mazda
// Add an element at the beginning
cars.push_front("Tesla");

// Add an element at the end
cars.push_back("VW");
// Remove the first element
cars.pop_front();

// Remove the last element
cars.pop_back();
//will give a error
// for (int i = 0; i < cars.size(); i++) {
//   cout << cars[i] << "\n";
// }
//no error loop through
for (string car : cars) {
  cout << car << "\n";


    return 0;
}