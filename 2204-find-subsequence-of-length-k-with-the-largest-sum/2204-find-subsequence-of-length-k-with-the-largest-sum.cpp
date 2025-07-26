class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        vector<int>temp = nums;
        sort(temp.begin(),temp.end(), greater<int>());
        
        unordered_map<int, int>mp;
        for (int i = 0; i < k; i++) {
            mp[temp[i]]++;
        }

        vector<int>vec;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                vec.push_back(nums[i]);
                mp[nums[i]]--;
                if (mp[nums[i]] == 0)
                    mp.erase(nums[i]);
            }
        }
        return vec;
            
    }
};