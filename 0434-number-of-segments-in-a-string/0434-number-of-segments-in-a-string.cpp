class Solution {
public:
    int countSegments(string s) {
        
        int i = 0;
        while(s[i] == ' ') i++;
        if (i == s.size())
            return 0;

        int j = s.size()-1;
        while(s[i] == ' ') j--;
        j++;
        s.push_back(' ');

        int total = 0;
        for (int k = i; k <= j; k++) {
            if (s[k] == ' ' and s[k-1] != ' ') {
                cout << s[k-1] << " " << s[k] << endl;
                total++;
            }
        }
        return total;
    }
};