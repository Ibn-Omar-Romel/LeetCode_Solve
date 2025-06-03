class Solution {
public:
    bool hasSameDigits(string s) {
        
        while(s.size() > 2) {

            string st = "";
            for (int i = 0; i < s.size()-1; i++) {
                int a = s[i] -'0';
                int b = s[i+1] -'0';

                int c = (a+b) % 10;

                st.push_back((char)c);
            }
            s = st;
        }
        if(s[0] == s[1])
            return true;
        return false;
    }
};