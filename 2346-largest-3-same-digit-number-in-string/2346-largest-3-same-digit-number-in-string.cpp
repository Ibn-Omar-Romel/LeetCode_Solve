class Solution {
public:
    string largestGoodInteger(string num) {

        string s = "###";
        for (int i = 0; i < num.size()-2; i++) {
            if (num[i] == num[i+1] and num[i] == num[i+2] and num[i]) {
                if (s[0] < num[i]) {
                    string st = "";
                    st.push_back(num[i]);
                    st.push_back(num[i]);
                    st.push_back(num[i]);
                    s = st;
                    cout << s << " " << st << endl;
                }
            }
        }
        return (s[0] != '#')? s : "";
    }
};