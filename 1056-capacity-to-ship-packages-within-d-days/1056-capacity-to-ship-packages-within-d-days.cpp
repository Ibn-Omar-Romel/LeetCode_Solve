class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int leastWeight = accumulate(weights.begin(), weights.end(), 0);
        int left = *max_element(weights.begin(), weights.end()); 
        int right = leastWeight;

        while(left <= right) {

            int mid = left + (right - left) / 2;
            int count = 1, total = 0; // count = 1,at least the whole array will be taken

            for (int w : weights) {
                if (total + w > mid) {
                    count++;
                    total = 0;
                }
                total += w;
            }

            if (count <= days) {
                leastWeight = mid;
                right = mid -1;
            }
            else {
                left = mid + 1;
            }
        }
        return leastWeight;
    }
};