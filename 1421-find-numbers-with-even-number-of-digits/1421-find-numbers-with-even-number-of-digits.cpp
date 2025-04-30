class Solution {
public:
    int findNumbers(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int count = 0;
        for (auto& x : nums) {

            string s = to_string(x);
            if (s.size() % 2 == 0)
                count++;
        }
        return count;
    }
};