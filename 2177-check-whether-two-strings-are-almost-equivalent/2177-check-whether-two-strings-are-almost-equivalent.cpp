class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        
        vector<int>vec1(26, 0);
        vector<int>vec2(26, 0);
        
        for (int i = 0; i < word1.size(); i++) {
            vec1[word1[i] -'a']++;
        }

        for (int i = 0; i < word2.size(); i++) {
            vec2[word2[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            vec1[i] = abs(vec1[i]- vec2[i]);
        }
        
        for (auto x : vec1) {
            if (x > 3)
                return false;
        }
        return true;
    }
};