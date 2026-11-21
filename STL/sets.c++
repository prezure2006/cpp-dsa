#include <bits/stdc++.h>
using namespace std;

int main() {
   // Create a set called cars that will store strings
set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print set elements
for (string car : cars) {
  cout << car << "\n";
}
// Create a set called numbers that will store integers
set<int> numbers = {1, 7, 3, 2, 5, 9};

// Print set elements
for (int num : numbers) {
  cout << num << "\n";
}
cout<<"fuckoff ";
// Sort elements in a set in descending order
set<int, greater<int>> plumbers = {1, 7, 3, 2, 5, 9};
// Print the elements
for (int num : plumbers) {
  cout << num << "\n";
}

//duplicate elem in sets 
set<string> cars1 = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};
// Add new elements
cars1.insert("Tesla");
cars1.insert("VW");

// Print set elements
for (string car : cars1) {
  cout << car << "\n";
}

    return 0;
}