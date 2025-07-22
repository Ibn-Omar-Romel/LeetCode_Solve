class Solution {
public:

    int solve(int i , vector<int>& nums, vector<int>& dp) {

        if (i >= nums.size()) {
            return 0; // return 0, cause we reached the end
        }

        if (dp[i] != -1)
            return dp[i];

        int steel = nums[i] + solve(i+2, nums, dp); // we will take this one, so we will skip the next one
        int skip = solve(i+1, nums, dp); // we will not take it, so we can take the next one

        return dp[i] = max(steel, skip);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();
        vector<int>dp(n, -1);
        return solve(0, nums, dp); 
    }
};