class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

        int n = digits.size();

        unordered_set<int> st;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < n; k++) {

                    if (i == j || j == k || i == k) {
                        continue;
                    }
                    int value =
                        (digits[i] * 100) + (digits[j] * 10) + digits[k];
                    if (value >= 100 and value % 2 == 0) {
                        st.insert(value);
                    }
                }
            }
        }
        for (auto it : st) {
            ans.push_back(it);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};