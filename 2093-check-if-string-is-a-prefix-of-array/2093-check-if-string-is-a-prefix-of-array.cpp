class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       
       int i = 0;
       for (auto st : words) {
            
            int left = s.size()-i;
            if (left < st.size())
                return false;

            for (int j = 0; j < st.size(); j++) {
                if(s[i] != st[j]) {
                    if (i < s.size())
                        return false;
                } 
                else {
                    i++;
                }
            }
            if (i == s.size())
                break;
       }
       return i == s.size();
    }
};