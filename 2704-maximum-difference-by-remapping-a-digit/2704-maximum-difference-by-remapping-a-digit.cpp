class Solution {
public:
    int minMaxDifference(int num) {
        
        string s = to_string(num);
        string st = to_string(num);
        char ch;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '9') {
                ch = s[i];
                while(i < s.size()) {
                    if (s[i] == ch)
                        s[i] = '9';
                    i++;
                }
            }
        }
        int a = stoi(s);
        for (int i = 0; i < st.size(); i++) {
            if (st[i] != '0') {
                ch = st[i];
                while(i < st.size()) {
                    if (st[i] == ch)
                        st[i] = '0';
                    i++;
                }
            }
        }
        int b = stoi(st);
        return a - b;
    }
};