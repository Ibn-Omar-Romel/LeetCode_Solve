class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>st;
        for (auto x : candyType) {
            st.insert(x);
        }

        int n = candyType.size() / 2;
        if (st.size() <= n)
            return st.size();
        else
            return n;
    }
};