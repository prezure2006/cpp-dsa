### Easy Question on bit manipulation

1. Power of Two
   Given an integer n, return true if it is a power of two. Otherwise, return false.
   [Approach]
   An integer n is a power of two, if there exists an integer x such that n == 2x.
   Like if a no is power of two generally It only has one set bit which is the lsb
   If we take the and of a no and the no -1 the nuber less than it will have all the but set insted of the bit whcih the original no have so the output becomes zero that it

[Code]

```
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n>0 && (n &(n-1))==0){
            return true;
        }
        return false;
        }

};
```

[Complexity]
Tc - O(1);
Sc-O(1);

2.  Count the Number of Set Bits
    Given an integer n, return the number of set bits (1s) in its binary representation.

Can you solve it in O(log n) time complexity?

[Approach]
Brute force would be convert this no to binary and then use a for loop to count no fo ones
now use bit manipualtion.

Bit manipul
Approach
SO a no

```
class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while(n>1){
            if(n&1)
            {
                cnt++;

            }
            n = n/2;

        }
            if(n==1)
        {
            cnt = cnt+1;
        }
        return cnt;
    }
};
```

3. Swap Two Number
   Given two integers a and b, swap them in-place using only 2 variables (without using a temporary variable).

Can you solve it using:

Arithmetic operations?
Bitwise XOR?

[Approach]
There are various appraoch
but what happens when we take xor of 2 numbers
The XOR operator compares corresponding bits of two numbers. It returns 1 if the bits are different and 0 if they are the same. This creates two useful properties:
• Self-cancellation. Any number XORed with itself equals zero (A ^ A = 0).
• Identity. Any number XORed with zero stays unchanged (A ^ 0 = A).
[Code]

```
class Solution {
public:
    void swap(int &a, int &b) {
         a = a^b;
         b =a^b;
         a = a ^ b;

    }
};

```

[Complexity]
Tc- O(1);
Sc- O(1);
