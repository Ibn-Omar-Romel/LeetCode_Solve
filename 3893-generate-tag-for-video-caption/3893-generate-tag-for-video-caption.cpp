class Solution {
public:
    string generateTag(string caption) {
        string s = "#";
        int i = 0;
        while(caption[i] == ' ') {
            i++;
        }
        
        string temp = "";
        for ( ; i < caption.size(); i++) {
            if (caption[i] != ' ') {
                if (temp.size() == 0)
                    temp.push_back(toupper(caption[i]));
                else {
                    temp.push_back(tolower(caption[i]));
                }
            }
            else if (temp.size() != 0) {
                s += temp;
                temp = "";
            }
        }    
        if (temp.size() != 0) {
            s += temp;
        }

        s[1] = tolower(s[1]);
        while(s.size() > 100) {
            s.pop_back();
        }
        return s;
    }
};