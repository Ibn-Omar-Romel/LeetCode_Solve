class Solution {
public:
    int maxDiff(int num) {

        string s1 = to_string(num);
        string s2 = s1;
        
        //for maximum
        int index = s1.find_first_not_of('9');
        if (index != string::npos) {
            char ch = s1[index];
            replace(s1.begin(), s1.end(), ch, '9');
        }

        //for minimum
        for (int i = 0; i < s2.size(); i++) {
            char ch = s2[i];
            if (i == 0) {
                if (s2[i] != '1') {
                    replace(s2.begin(), s2.end(), ch, '1');
                    break;
                }
            }
            else if(s2[i] != '0' && s2[i] != s2[0]){
                replace(s2.begin(), s2.end(), ch, '0');
                break;
            }
        }
        int a = stoi(s1);
        int b = stoi(s2);
        cout << a << " " << b << endl;

        return a - b;
    }
};