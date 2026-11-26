## Fractional Knapsack

- **Problem:** one-line summary
- **Idea:** why greedy works (sort by value/weight, take the best first)
- **Code:** your final solution
- **Mistakes I made:** e.g. insert vs push_back, missing semicolon
- **Time/Space:** O(n log n) / O(n)
  Need to find the max profit with min weight you need to fill the sack on whole

```
class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<pair<int, int>> items;
        for (int i = 0; i < n; i++) {
            items.push_back({val[i], wt[i]});
        }

        // sort by value/weight ratio, highest first
        sort(items.begin(), items.end(),
             [](const pair<int,int>& a, const pair<int,int>& b) {
                 return (1.0 * a.first / a.second) > (1.0 * b.first / b.second);
             });

        double result = 0;
        for (int i = 0; i < n; i++) {
            if (items[i].second <= capacity) {
                result += items[i].first;
                capacity -= items[i].second;
            } else {
                result += (1.0 * items[i].first / items[i].second) * capacity;
                break;
            }
        }
        return result;
    }
};
```

TC - n log n
SC - n for the extra vecotr to store the fractions
