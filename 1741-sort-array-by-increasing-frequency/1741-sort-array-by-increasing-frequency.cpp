class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        map<int,int>mp;
        for (auto x : nums) {
            mp[x]++;
        }
        map<int, vector<int>>mpp;
        for (auto it : mp) {
            mpp[it.second].push_back(it.first);
        }

        vector<int>result;
        for (auto it : mpp) {
            vector<int>temp = it.second;
            reverse(temp.begin(), temp.end());

            for (int i = 0; i < temp.size(); i++) {
                
                for (int j = 0; j < it.first; j++) {
                    result.push_back(temp[i]);
                }
            }
        }
        return result;
    }
};