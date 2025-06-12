class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--) {
            int minvalue = INT_MAX;
            int index = -1;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < minvalue) {
                    minvalue = nums[i];
                    index = i;
                }
            }
            nums[index] = nums[index] * multiplier;
        }
        return nums;
    }
};