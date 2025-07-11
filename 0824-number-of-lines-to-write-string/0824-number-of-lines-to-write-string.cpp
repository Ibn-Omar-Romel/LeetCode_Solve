class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {

        int count = 1;
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            int value = widths[s[i] - 'a'];

            if (total + value > 100) {
                count++;
                total = value;
            } else {
                total += value;
            }
        }
        return {count, total};
    }
};