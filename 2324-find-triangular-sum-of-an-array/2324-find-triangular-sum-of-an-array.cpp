class Solution {
public:
    int triangularSum(vector<int>& nums) {

        int sum = 0, count = nums.size()-1, n = count;
        while(count--) {
            for (int i = 0; i < n; i++) {
                nums[i] = (nums[i] + nums[i+1]) % 10;
            }
            n--;
        }
        return nums[0];
    }
};