class Solution {
public:
    bool hasSameDigits(string s) {
        
        while(s.size() > 2) {

            string st = "";
            for (int i = 0; i < s.size()-1; i++) {
                int a = ((s[i]-'0') + (s[i+1]-'0')) % 10;
                char ch = a + '0';
                st.push_back(ch);
            }
            s = st;
        }
        
        return s[0] == s[1];
    }
};