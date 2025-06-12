class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = s.size();
        while(n--) {

            char ch = s[0];
            for (int i = 0; i < s.size()-1; i++) {
                s[i] = s[i+1];
            }
            s[s.size()-1] = ch;
            if (s == goal)
                return true;
        }
        return false;
    }
};