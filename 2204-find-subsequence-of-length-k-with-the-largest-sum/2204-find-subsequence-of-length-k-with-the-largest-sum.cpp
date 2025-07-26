class Solution {
public:
    // vector<int> maxSubsequence(vector<int>& nums, int k) {

    //     vector<int>temp = nums;
    //     sort(temp.begin(),temp.end(), greater<int>());
        
    //     unordered_map<int, int>mp;
    //     for (int i = 0; i < k; i++) {
    //         mp[temp[i]]++;
    //     }

    //     vector<int>vec;
    //     for (int i = 0; i < nums.size(); i++) {
    //         if (mp.find(nums[i]) != mp.end()) {
    //             vec.push_back(nums[i]);
    //             mp[nums[i]]--;
    //             if (mp[nums[i]] == 0)
    //                 mp.erase(nums[i]);
    //         }
    //     }
    //     return vec;
            
    // }


    vector<int> maxSubsequence(vector<int>& nums, int k) {

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (int i = 0; i < nums.size(); i++) {
            if (pq.size() < k) {
                pq.push({nums[i], i});
            }
            else if (nums[i] > pq.top().first) {

                pq.pop();
                pq.push({nums[i], i});
            }
        }

        vector<pair<int, int>>vec;
        while(!pq.empty()) {
            vec.push_back(pq.top());
            pq.pop();
        }

        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        vector<int>result;
        for (int i = 0; i < vec.size(); i++) {
            result.push_back(vec[i].first);
        }
        return result;

    }
};