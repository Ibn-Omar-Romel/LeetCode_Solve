class Solution {
public:
    bool checkRecord(string s) {
        
        int a = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A'){
                a++;
                if (a == 2)
                    return false;
            }
            else if (s[i] == 'L') {
                if (i+2 < s.size() and s[i+1] == 'L' and s[i+2] == 'L') {
                    return false;
                }
            }
        }
        return true;
    }
};