class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        vector<vector<int>>vec;
        int start = intervals[0][0], end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            
            if (end >= intervals[i][0]) {
                end = max(end, intervals[i][1]);
                start = min(start, intervals[i][0]);
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