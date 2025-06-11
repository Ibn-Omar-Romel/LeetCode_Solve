class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       
       string st = "";
       for (auto w : words) {
            st += w;

            if(st == s)
                return true;
       }
       return false;
    }
};