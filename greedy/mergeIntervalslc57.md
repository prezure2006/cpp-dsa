# LC 57

Given a new Interval and we have to merge if mergable or insert that interval in the Intervals.
Brute Force:-
O(n^2)

```
class Solution {
public:// startign point min and ending point maximum
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;
        while(i < intervals.size()){
            // loop running over all the intervals
    if(intervals[i][1] < newInterval[0]){
        // no merging or overlapping happens
        i++;
    }
    else if(intervals[i][0] > newInterval [1]){
        intervals.insert(intervals.begin()+i, newInterval);
        return intervals;
    }
    else{
        // Merging is happening
        newInterval[0] = min(intervals[i][0], newInterval[0]);
        newInterval[1] = max(intervals[i][1], newInterval[1]);
        intervals.erase(intervals.begin()+i);
    }
        }
        // No interval in middle so pushing it to the end
        intervals.insert(intervals.begin()+intervals.size(),newInterval);
        return intervals;
    }
};
```

Optimal :-

choosing solution ang working on it

```
class Solution {
public:// startign point min and ending point maximum
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0;
        // take a result variable
     vector<vector<int>> result;
     // size of the interval
     int n = intervals.size();
     // main loop
     while(i<n){
        // check if the interval is bigger than the given newInterval
        if( intervals[i][1]< newInterval[0]){

            result.push_back(intervals[i]);
            // check that interval is biggger than the higher end of newINterval itself
        }else if (intervals[i][0]>newInterval[1]){
            break;


    // else merge the overlapping intervals
        }else {

            newInterval[0] = min(newInterval[0],intervals[i][0]);
            newInterval[1] = max(newInterval[1],intervals[i][1]);
        }
        // keep moving forward
        i++;
     }
     // else push the new interval to its current position
     result.push_back(newInterval);
     // push the remaining intervals
     while(i<n){
        result.push_back(intervals[i]);
        i++;
     }
     // return the ans
     return result;
    }
};
```

### New Things in this question

[1] Only the concept of 2d vectors (Which is not that tuff )
[2] While Loop With conditions
