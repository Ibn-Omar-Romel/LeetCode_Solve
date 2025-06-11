class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        int n = nums.size();
        vector<int>vec(n);

        int j = 0;
        int k = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                vec[j] = nums[i];
                j += 2;
            }
            else {
                vec[k] = nums[i];
                k += 2;
            }
        }
        return vec;
    }
};