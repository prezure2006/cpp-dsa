# Gfg Shortest Job First

The shortest job first (SJF) or shortest job next, is a scheduling policy that selects the waiting process with the smallest execution time to execute next. Given an array of integers bt[] of size n. Array bt[] denotes the burst time of each process. Calculate the average waiting time of all the processes and return the nearest integer which is smaller or equal to the output.

Note: Consider all process are available at time 0.

[Approach]
You need to take the process with shortest time first so it could complete
That means sort the array and keep adding the time

[Code]

```
class Solution {
  public:
    int solve(vector<int>& bt) {
        // code here
        sort(bt.begin(),bt.end());
        int n = bt.size();
        int wtTime =0;
        int t =0 ;
        for (int i =0;i<n;i++){
            wtTime += t;
            t += bt[i];
        }
        return wtTime/n;
    }
};
```

[Complexity]
Tc - O(n)
Sc - O(1)
