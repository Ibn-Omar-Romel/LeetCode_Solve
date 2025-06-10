class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();
        vector<int> vec(26, 0);
        for (auto x : s) {
            vec[x - 'a']++;
        }
        int maxOdd = INT_MIN, minEven = INT_MAX;
        for (int i = 0; i < 26; i++) {
            if (vec[i] % 2) {
                maxOdd = max(maxOdd, vec[i]);
            } else if (vec[i]) {
                minEven = min(minEven, vec[i]);
            }
        }
        return maxOdd - minEven;
    }
};