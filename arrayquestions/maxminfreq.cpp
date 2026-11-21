#include <bits/stdc++.h>
using namespace std;

// Class to count frequencies and find elements with max and min frequency
class FrequencyCounter {
public:
    void countFreq(vector<int> v, int n)
    {
        vector<bool> visited(n, false); // Track which elements have already been processed
        int maxFreq = 0, minFreq = n;   // Initialize frequency bounds
        int maxEle = 0, minEle = 0;     // Initialize elements with max and min frequency

        for (int i = 0; i < n; i++) {

            // Skip this element if it's already counted
            if (visited[i] == true)
                continue;

            // Count the frequency of arr[i]
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (v[i] == v[j]) {
                    visited[j] = true; // Mark as visited to avoid recounting
                    count++;
                }
            }

            // Update max frequency and corresponding element
            if (count > maxFreq) {
                maxEle = v[i];
                maxFreq = count;
            }

            // Update min frequency and corresponding element
            if (count < minFreq) {
                minEle = v[i];
                minFreq = count;
            }
        }

        // Output the results
        cout << "The highest frequency element is: " << maxEle << "\n";
        cout << "The lowest frequency element is: " << minEle << "\n";
    }
};

int main()
{
    FrequencyCounter fc;// Create object of class
    int n;
    cin>> n;

    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }

    
    fc.countFreq(arr, n);                    // Call the function
    return 0;
}
