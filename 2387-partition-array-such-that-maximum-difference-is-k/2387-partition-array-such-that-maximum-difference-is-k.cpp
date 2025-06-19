class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int i = 0, j = 1;

        int count = 1;

        while(j < n) {
            if (nums[j] - nums[i] > k) {
                count++;
                i = j;
            }
            j++;
        }
        return count;
    }
};