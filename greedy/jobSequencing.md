# Job Sequencing

You are given two arrays: deadline[], and profit[], which represent a set of jobs, where each job is associated with a deadline, and a profit. Each job takes 1 unit of time to complete, and only one job can be scheduled at a time. You will earn the profit associated with a job only if it is completed by its deadline.

Your task is to return the following two values

- Number of jobs selected for the maximum profit.
- The total maximum profit by completing those jobs.
  [Approach]

1. We have deadline array we have profit array we do the task first which has most profit what we do is We Make a vecotr pair for profit and Deadlie and sort the array based on decreasing order Of profit
2. We find the max Deadline form the deadline arraySlot array for savign the slot of the work.
3. We will have 2 loop one loop for the size of deadline array and the another for the check from back like the work with most profit should be assinged to the last most day will benefit us.
4. We mark the deadline whcih is chosen and increase the count and add the profit .
5. In the end we return the profit with the no of work we do
   [Code]

```
class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
int n = deadline.size();

      vector<pair<int,int>> jobs;          // {profit, deadline}
      for (int i = 0; i < n; i++) {
          jobs.push_back({profit[i], deadline[i]});
      }

      // sort by profit descending
      sort(jobs.begin(), jobs.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
          return a.first > b.first;
      });


      int maxDeadline = 0;
      for (int i = 0; i < n; i++) {
          maxDeadline = max(maxDeadline, deadline[i]);
      }

      vector<int> slot(maxDeadline + 1, -1);   // -1 means free
      int cnt = 0;
      int totalProfit = 0;

      for (int i = 0; i < n; i++) {
          for (int j = min(maxDeadline, jobs[i].second); j > 0; j--) {
              if (slot[j] == -1) {
                  slot[j] = i;
                  cnt++;
                  totalProfit += jobs[i].first;
                  break;
              }
          }
      }

      return {cnt, totalProfit};
    }
};
```

[Complexity]
Tc - O(nlogn + nSquare)
Sc- (MaxDeadline ) For sotring the deadline in slot.
