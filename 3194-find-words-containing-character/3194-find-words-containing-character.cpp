class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        vector<int> vec;
        for (int i = 0; i < words.size(); i++) {
            for (auto ch : words[i]) {
                if (ch == x) {
                    vec.push_back(i);
                    break;
                }
            }
        }
        return vec;
    }
};