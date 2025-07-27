class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        int count = 0;
        int i = 0, j = 1;

        // remember I is the last valid interval

        while( j < n ) {
            if ( intervals[i][1] <= intervals[j][0] ) { // (2,3) (3,4)
                i = j;
            }
            else if ( intervals[i][1] <= intervals[j][1] ) {  // (1,2) (1,3)
                count++;
            }
            else { 
               i = j;
               count++;
            }

            j++;
        }

        return count;
    }
};