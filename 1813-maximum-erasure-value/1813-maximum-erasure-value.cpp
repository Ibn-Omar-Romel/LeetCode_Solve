class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        int maxSum = 0;
        int currentSum = 0;
        unordered_set<int> st;

        int i = 0, j = 0;
        while (j < nums.size()) {

            currentSum += nums[j];
            while (st.find(nums[j]) != st.end()) {

                st.erase(nums[i]);
                currentSum -= nums[i];
                i++;
            }
            maxSum = max(maxSum, currentSum);
            st.insert(nums[j]);
            j++;
        }
        return maxSum;
    }
};