class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<int> vec;
        for (int i = 0; i < nums.size(); i++) {
            vec.push_back(nums[nums[i]]);
        }
        return vec;
    }
};