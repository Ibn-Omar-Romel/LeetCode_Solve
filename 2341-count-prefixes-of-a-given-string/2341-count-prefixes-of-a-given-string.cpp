class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int count = 0;
        for (auto w : words) {
            int i = 0;
            while(i < w.size()) {
                if (w[i] != s[i]) {
                    break;
                }
                i++;
            }
            if (i == w.size()) {
                count++;
            }     
        }
        return count;
    }
};