class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {

        int n = nums.size();
        vector<int> diff(n + 1, 0);

        for (auto it : queries) {
            int l = it[0], r = it[1];
            diff[l] += 1;
            if (r + 1 < n) {
                diff[r + 1] -= 1;
            }
        }
        vector<int> freq(n, 0);
        freq[0] = diff[0];
        for (int i = 1; i < n; i++) {
            freq[i] = freq[i - 1] + diff[i];
        }

        for (int i = 0; i < n; i++) {
            if (freq[i] < nums[i]) {
                return false;
            }
        }
        return true;
    }
};