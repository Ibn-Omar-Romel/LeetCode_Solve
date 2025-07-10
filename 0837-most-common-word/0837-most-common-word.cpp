class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        for (char& ch : paragraph) {
            if (ispunct(ch)) 
                ch = ' ';
            else 
                ch = tolower(ch);
        }
        unordered_set<string> bannedSet(banned.begin(), banned.end());

        stringstream ss(paragraph);
        string word;
        map<string, int> mp;

        while (ss >> word) {
            if (bannedSet.find(word) == bannedSet.end()) {
                mp[word]++;
            }
        }

        string result;
        int maxValue = 0;

        for (auto& it : mp) {
            if (it.second > maxValue) {
                maxValue = it.second;
                result = it.first;
            }
        }

        return result;
    }
};