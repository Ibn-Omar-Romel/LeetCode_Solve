class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });

        int count = 1, lastPoint = points[0][1];
        for (auto it : points) {
            if (lastPoint < it[0]) {
                count++;
                lastPoint = it[1];
            }
        }
        return count;
    }
};