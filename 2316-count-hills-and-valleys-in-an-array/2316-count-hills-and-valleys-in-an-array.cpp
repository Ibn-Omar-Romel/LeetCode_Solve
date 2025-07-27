class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        int left = nums[0];
        int count = 0;
        for (int i = 1; i < nums.size()-1; i++) {
            if (nums[i] != nums[i+1]) {
                if ((left < nums[i] and nums[i] > nums[i+1]) || (left > nums[i] and nums[i] < nums[i+1])) {
                    count++;
                }
                left = nums[i];
            }
            
        }
        return count;
    }
};