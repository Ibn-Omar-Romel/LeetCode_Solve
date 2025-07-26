class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int a = *max_element(nums.begin(), nums.end());

        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (a == nums[i]) {
                index = i;
                continue;
            }

            if (nums[i] * 2 > a)
                return -1;    
        }
        return index;
    }
};