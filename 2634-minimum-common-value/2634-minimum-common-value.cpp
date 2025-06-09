class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for (auto x : nums1)
            st.insert(x);
        for (auto x : nums2)
            if (st.find(x) != st.end())
                return x;
        
        return -1;
    }
};