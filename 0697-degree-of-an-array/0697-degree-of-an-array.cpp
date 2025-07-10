class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        map<int, int> mp_frequncy;
        map<int, pair<int, int>> mp_length;

        int maxFrequency = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp_frequncy[nums[i]]++;
            maxFrequency = max(maxFrequency, mp_frequncy[nums[i]]);

            if (mp_length.find(nums[i]) == mp_length.end()) {
                mp_length[nums[i]] = {i, i};
            } else {
                mp_length[nums[i]].second = i;
            }
        }

        int length = INT_MAX;
        for (auto it : mp_frequncy) {
            if (it.second == maxFrequency) {
                int a = mp_length[it.first].first;
                int b = mp_length[it.first].second;

                length = min(length, b - a + 1);
            }
        }
        return length;
    }
};