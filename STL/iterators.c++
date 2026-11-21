#include <bits/stdc++.h>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Create a vector iterator called it
vector<string>::iterator it;
// Point to the first element in the vector
it = cars.begin();
// Point to the second element
it = cars.begin() + 1;
// Point to the last element
it = cars.end() - 1;

it = cars.begin();
// Modify the value of the first element
*it = "Tesla";

// Volvo is now Tesla

// Loop through the vector with the iterator
for (it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}

// direct use of auto keyword
for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}


// Print vector elements
for (string car : cars) {
  cout << car << "\n";
}
// Loop through vector elements to remove particular element 
for (auto it = cars.begin(); it != cars.end(); ) {
  if (*it == "BMW") {
    it = cars.erase(it); // Remove the BMW element
  } else {
    ++it;
  }
}

// Print vector elements
for (const string& car : cars) {
  cout << car << "\n";
}


    return 0;
}
