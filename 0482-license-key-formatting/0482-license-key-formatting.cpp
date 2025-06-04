class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
        int n = s.size();
        string st = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != '-')
                st.push_back(toupper(s[i]));
        }
        n = st.size();
        int first = n % k, i = 0;
        string ans = "";
        if (first > 0) {
            ans += st.substr(0, first);
            i = first;
            if (i < n)
                ans.push_back('-');
        }

        
        while( i < n) {
            
            ans += st.substr(i, k);
            i += k;
            if (i < n)
                ans.push_back('-');
        }
        return ans;
    }
};