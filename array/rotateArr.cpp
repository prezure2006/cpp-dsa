#include <bits/stdc++.h>
using namespace std;
//-- there are two variations left rotation and 2nd right rotation 
// and if the size of k = arrays size no rotations will be performed 

// so we take k  =k%n to remove the unecessay rotation steps
// Left rotation is like the array is 
//1 2 3 and k =1 
//left rotate by 1 place so the ans would be
//2 3 1 se 1 goes left and everything came in left side
// basically this question has two approaches and the 
// Brute Force is 
//if k =n store the first n elements in a temporary array and then move the 
//elements from k+1 to n in the left side  and in the end 
//save the took elements from n-k to n and you get your ans 
//same for the right rotation
// The Optimal approach 

// For left shift 

// 1 2 3 4 k=2 
// ans would be 3 4 1 2
// we will use reverse function in this and for left rotation 
// First is reverse 1 to k 
// then k +1 to n 
// then 0 to n -1

// For right shift 

// 1 2 3 4 k=2 
// ans would be 3 4 1 2 
// we will use reverse function in this and for right rotation 
// First is reverse 1 to n
// then k +1 to n   the order of last two doesnt matters bcz its indepndednt
// then 0 to n -1
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        
    }

    return 0;
}