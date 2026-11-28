1. Nth Root of M

[Approach]
1>Check is m is zero any thing zero make that shit 0.
2> Now loop over all the numbers till the endding number M
3> Calculate the power of every i and the power n and check that if it equals to m if yes return else break and return -1.
[Code]

```
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        if( m==0){
            return 0;
        }

        for(int i =1 ;i<=m;i++)
        {
            long long power = pow(i,n);
            if(power == m){
                return i;
            }
            if(power>m){
                break;
            }
        }
        return -1;
    }
};
```

[Complexity]
tc- O(m);
Sc- O(1);

There is an another binary search appraoch.
