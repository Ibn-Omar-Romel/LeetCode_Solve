class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());

        int start = intervals[0][0];
        int end = intervals[0][1];

        vector<vector<int>> vec;

        for (int i = 1; i < intervals.size(); i++) {

            if (intervals[i][0] <= end) {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
            }
            else {
                vec.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        
        vec.push_back({start, end});
        return vec;
    }
};