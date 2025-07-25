class Solution {
public:
    int maxSum(vector<int>& nums) {

        unordered_set<int>st;
        int total = 0;
        int minMinus = INT_MIN;
        bool flag = false;
        for (auto x : nums) {
            if (st.find(x) == st.end() && x >= 0) {
                total += x;
                st.insert(x);

                if (!flag)
                    flag = true;
            }

            if (x < 0) {
                minMinus = max(minMinus, x);
            }
        }

        if (!flag)
            return minMinus;

        return total;
    }
};