#include <bits/stdc++.h>
using namespace std;

int main() {
   // Create a map that will store the name and age of different people
map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

// Get the value associated with the key "John"
cout << "John is: " << people["John"] << "\n";

// Get the value associated with the key "Adele"
cout << "Adele is: " << people["Adele"] << "\n";
 // Get the value associated with the key "Adele"
cout << "Adele is: " << people.at("Adele") << "\n";

// Get the value associated with the key "Bo"
cout << "Bo is: " << people.at("Bo") << "\n";
// Try to access an element that does not exist (will throw an exception)
// cout << people.at("Jenny");

  
    map<long, char> grr = {
    {45, 'e'},
    {23, 'k'}
};

cout << grr.at(45);
       return 0;
}