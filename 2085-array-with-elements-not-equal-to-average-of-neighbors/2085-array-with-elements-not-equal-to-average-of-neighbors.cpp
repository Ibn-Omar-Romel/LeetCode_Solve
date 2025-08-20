class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int>vec;
        
        int i = 0, j = nums.size() / 2;

        while(j < nums.size()) {
            vec.push_back(nums[j]);
            vec.push_back(nums[i]);
            i++, j++;
        }
        if (nums.size() % 2 != 0)
            vec.pop_back();

        return vec;
    }
};