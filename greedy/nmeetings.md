# N meetings in a room

Given one meeting room and N meetings represented by two arrays, start and end, where start[i] represents the start time of the ith meeting and end[i] represents the end time of the ith meeting, determine the maximum number of meetings that can be accommodated in the meeting room if only one meeting can be held at a time. A meeting starting at the same time another meeting ends is considered overlapping.
[Approach]
Given two array start and end we to to find that how many maximum possiblem meetings can happen in a single room 1 time only one meeting so you can get 2 meetings.
1> First we store the start and end in vector pair and then we sort the array based on the increasing order or end time so we can find overlapping.
2> Now we take previous end them and set it to end time of the first meeeting and take a maxMeet var in we start that with bcz it tells that the first meeting ahs happend and then.
3> The for loop start with 1 to n-1 we take current start and current end and ckeck if current start is greater than previous end so we add to the answer.
4> In the end we return the ans;

[Code]

```
class Solution{
    public:

    int maxMeetings(vector<int>& start, vector<int>& end){
        //your code goes here
        int maxMeet = 1;

        int n = start.size();
        if (n == 1) return maxMeet;
        int m = end.size();
        vector<pair<int, int> > meetingTime;
        meetingTime.reserve(n);
        for(int i = 0;i<n;i++){
           meetingTime.emplace_back(start[i], end[i]);
        }
        sort(meetingTime.begin(), meetingTime.end(),[](const pair<int , int> &p1 , const pair<int , int> &p2 ){
            return p1.second<p2.second;
        });
        int prevEnd = meetingTime[0].second;

        for (int i =1;i<n;i++){
            int currStart = meetingTime[i].first;
            int currEnd = meetingTime[i].second;
      if (currStart > prevEnd) {
                maxMeet++;
                prevEnd = currEnd;
            }


        }
        return maxMeet;
    }
};
```

[Complexity]
Tc - O(nlogn)
Sc - O(1)
