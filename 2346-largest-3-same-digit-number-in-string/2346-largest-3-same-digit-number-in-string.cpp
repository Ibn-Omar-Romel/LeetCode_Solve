class Solution {
public:
    string largestGoodInteger(string num) {

        char ch = ' ';
        for (int i = 0; i < num.size()-2; i++) {
            if (num[i] == num[i+1] and num[i] == num[i+2] and num[i]) {
                if (ch == ' ' || ch < num[i]) {
                    ch = num[i];
                }
            }
        }
        return (ch == ' ')? "" : string(3,ch);
    }
};