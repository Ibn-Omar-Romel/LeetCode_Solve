class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        string st = "";
        for (int i = 0; i < n/2; i++) {
            st.push_back(s[i]);

            if (n % (i+1) == 0) {
                string temp = "";
                for (int k = 1; k <= n/(i+1); k++) {
                    temp += st;
                }
                if (temp == s)
                    return true;
            }
            
        }
        return false;
    }
};