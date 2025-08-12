class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> vec;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (i > 0 and nums[i] == nums[i - 1]) // same value
                continue;

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 and nums[j] == nums[j - 1]) {
                    continue;
                }

                long long newtarget = (long long)target - nums[i] - nums[j];
                int left = j + 1, right = n - 1;

                while (left < right) {

                    long long sum = nums[left] + nums[right];

                    if (sum == newtarget) {
                        vec.push_back(
                            {nums[i], nums[j], nums[left], nums[right]});

                        while (left < right and nums[left] == nums[left + 1])
                            left++;

                        while (left < right and nums[right] == nums[right - 1])
                            right--;

                        left++;
                        right--;
                    } else if (sum < newtarget) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return vec;
    }
};