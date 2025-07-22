class Solution {
public:
    string makeFancyString(string s) {

        string st = "";

        int i = 0, j = 1;
        while (i < s.size()) {

            while (s[j] == s[i] and j < s.size()) {
                j++;
            }

            st.push_back(s[i]);
            if (j - i >= 2) {
                st.push_back(s[i]);
            }
            
            if (j > i) i = j;
            else i++;

            j++;
        }
        return st;
    }
};