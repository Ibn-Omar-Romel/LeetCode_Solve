class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {

        int left = 1, right = 1e7;
        int ans = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;
            double totalTime = 0.0;

            for (int i = 0; i < dist.size(); i++) {

                double time = (double)dist[i] / mid;

                if (i != dist.size() - 1) {
                    totalTime += ceil(time);
                } else {
                    totalTime += time;
                }
            }

            if (totalTime <= hour) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};