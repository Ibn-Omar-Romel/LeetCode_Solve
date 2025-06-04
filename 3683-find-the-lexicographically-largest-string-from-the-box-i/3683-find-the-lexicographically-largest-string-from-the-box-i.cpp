class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();
        if (numFriends == 1)
            return word;

        int maxLength = n - numFriends + 1;


        string result = word.substr(0, maxLength);
        for (int i = 1; i < n; i++) {
            if (i + maxLength - 1 < n) {
                string currentSubstring = word.substr(i, maxLength);
                if (currentSubstring > result) {
                    result = currentSubstring;
                }
            }
            else {
                int length = n - i;
                string currentSubstring = word.substr(i, length);
                if (currentSubstring > result) {
                    result = currentSubstring; 
                } 
            }
        }
        return result;
    }
};