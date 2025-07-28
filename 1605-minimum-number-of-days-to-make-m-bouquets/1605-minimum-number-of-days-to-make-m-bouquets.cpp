class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        int maxDayNumber = INT_MIN;

        for (int i = 0; i < bloomDay.size(); i++) {
            maxDayNumber = max(maxDayNumber, bloomDay[i]);
        }

        int totalDays = -1;
        int left = 1, right = maxDayNumber;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            int adj = 0, bouquets = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    adj++;
                    
                    if (adj == k) {
                        bouquets++;
                        adj = 0;
                    }
                } else {
                    adj = 0;
                }
            }
            if (bouquets >= m) {
                totalDays = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return totalDays;
    }
};