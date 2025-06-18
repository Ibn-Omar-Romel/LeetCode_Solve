#pragma GCC optimize("Ofast")
static auto _ = [](){ios::sync_with_stdio(false); cin.tie(nullptr); return nullptr;}();
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vec;
        int row = 0;
        for (int i = 0; i < nums.size(); i += 3) {
            if (nums[i + 2] - nums[i] > k) {
                vector<vector<int>> v;
                return v;
            } else {
                vec.push_back({nums[i], nums[i + 1], nums[i + 2]});
            }
        }
        return vec;
    }
};