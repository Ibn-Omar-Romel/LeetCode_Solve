class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size()) 
            return -1;
        
        int totalDays = -1;
        int left = 1, right = 1e9;

        while(left <= right) {

            int mid = left + (right - left) / 2;

            int adj = 0, bouquets = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    adj++;
                    
                    if (adj == k) {
                        bouquets++;
                        adj = 0;
                    }
                }
                else {
                    adj = 0;
                }
            }

            if (bouquets >= m) {
                totalDays = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return totalDays;
    }
};