# Assign Cookie

This is a greedy problem on lc
Solved it using a while loop and two pointers so
there are 2 arrays one cookie size array one child greed if greed is less than equal to cookie size we can Feed the child and move to the next kid and increase the child count.
The code is

```
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int i  = 0;
        int j =0;
      int maxChild =0;
      int n = g.size();
      int sizeB = s.size();
      while(i<n && j<sizeB){
        if(s[j]>= g[i]){
            maxChild++;
            i++;
        }else{
            j++;
        }
      }
      return maxChild;
    }
};

```

TC = O(n) and for sorting we take nlogn
so overall its n log n
