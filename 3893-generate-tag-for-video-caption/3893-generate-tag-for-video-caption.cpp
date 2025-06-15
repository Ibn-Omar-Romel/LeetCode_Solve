class Solution {
public:
    string generateTag(string caption) {

        int n = caption.size();

        string s = "#";
        int i = 0;
        while (caption[i] == ' ') { // to ignore leading spaces
            i++;
        }

        string temp = "";
        bool flag = false; // for checking if it's time for upper
        while (i < n) {

            if (caption[i] != ' ') {
                if (flag) {
                    s.push_back(toupper(caption[i]));
                    flag = false;
                } else {
                    s.push_back(tolower(caption[i]));
                }
            } else {
                flag = true;
            }

            if (s.size() == 100)
                break;
            i++;
        }

        return s;
    }
};