class Solution {
public:
    int search(vector<int>& nums, int target) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        // int l = 0;
        // int r = nums.size() - 1;

        // while (l <= r) {

        //     int m = l + (r - l) / 2;

        //     if (nums[m] == target) {
        //         return m;
        //     } else if (nums[m] < target) {
        //         l = m + 1;
        //     } else {
        //         r = m - 1;
        //     }
        // }
        // return -1;

        auto it = lower_bound(nums.begin(), nums.end(), target);

        if (it != nums.end() and *it == target)
            return it - nums.begin();
        return -1;
    }
};