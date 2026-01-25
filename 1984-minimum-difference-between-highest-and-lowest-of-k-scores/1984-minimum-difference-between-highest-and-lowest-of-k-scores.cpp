class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int maxdif = INT_MAX;
        
        for (int i = 0, j = k-1; j < nums.size(); i++, j++) {
            maxdif = min(maxdif, nums[j]- nums[i]);
        }
        return maxdif;
    }
};