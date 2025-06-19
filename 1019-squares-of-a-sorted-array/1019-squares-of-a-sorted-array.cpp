class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        int l = 0, r = n-1;

        vector<int>square(n, 0);
        for (int i = n-1; i >= 0; i--) {
            if (abs(nums[l]) < abs(nums[r])) {
                square[i] = nums[r] * nums[r];
                r--;
            }
            else {
                square[i] = nums[l] * nums[l];
                l++;
            }
        }
        return square;
    }
};