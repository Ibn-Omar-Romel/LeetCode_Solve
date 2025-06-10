class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int n = name.size(), m = typed.size();
        int i = 0, j = 0;

        while(j < m) {

            if (name[i] == typed[j]) {
                i++;
                j++;
            }
            else if (j > 0 and typed[j] == typed[j-1]) {
                j++;
            }
            else {
                return false;
            }
        }
        return i == n;
    }
};