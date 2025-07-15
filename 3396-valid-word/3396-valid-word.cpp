class Solution {
public:
    bool isValid(string word) {

        if (word.size() < 3)
            return false;

        bool vowel = false, consotant = false;
        for (auto x : word) {

            
            if (isdigit(x)) {
                continue;
            }

            x = tolower(x);

            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
                vowel = true;
            }
            else if (isalpha(x)) {
                consotant = true;
            }
            else {
                return false;
            }
        }

        if (vowel and consotant)    
            return true;
            
        return false;
    }
};