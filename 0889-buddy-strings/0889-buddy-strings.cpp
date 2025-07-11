class Solution {
public:
    bool buddyStrings(string s, string goal) {
        
        if (s.size() != goal.size())
            return false;

        if(s == goal) {
            set<char>st;
            for (auto x : s) {
                st.insert(x);
            }
            if (st.size() == s.size())
                return false;
            
            return true;
        }


        int start = -1, end = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != goal[i]) {
                start = i;
                break;
            }
        }
        for (int i = s.size()-1 ; i >= 0; i--) {
            if (s[i] != goal[i]) {
                end = i;
                break;
            }
        }

        if (start == end and start != -1) {
            return false;
        }

        if (start == -1 and end == -1) {
            swap(s[0], s[s.size()-1]);

            if (s == goal)
                return true;
            else
                return false;
        }

        swap(s[start], s[end]);
        if (s == goal)
            return true;

        return false;
    }
};