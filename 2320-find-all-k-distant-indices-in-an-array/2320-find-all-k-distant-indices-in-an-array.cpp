class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        int n = nums.size();
        set<int>st;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (abs(i - j) <= k and nums[j] == key) {
                    st.insert(i);
                }
            }
        }
        vector<int>vec;
        for (auto it : st) {
            vec.push_back(it);
        }
        return vec;
    }
};