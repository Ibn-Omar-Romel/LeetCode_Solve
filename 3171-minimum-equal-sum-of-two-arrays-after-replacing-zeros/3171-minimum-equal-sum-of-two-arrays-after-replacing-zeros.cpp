class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum = 0;
        
        long long sum1 = 0, count1 = 0;
        for (auto& x : nums1) {
            sum1 += x;
            if (x == 0)
                count1++;
        }

        long long sum2 = 0, count2 = 0;
        for (auto& x : nums2) {
            sum2 += x;
            if (x == 0)
                count2++;
        }

        long long value = max(sum1+count1, sum2+count2);
        
        if (sum1 < value and count1 == 0)
            return -1;
        if (sum2 < value and count2 == 0)
            return -1;

        return value;
    }
};