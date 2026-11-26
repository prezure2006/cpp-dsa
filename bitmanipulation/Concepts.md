### Easy Question on bit manipulation

231. Power of Two
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
