class Solution {
public:
    int largestInteger(int num) {
        
        string s = to_string(num);

        vector<int>odd, even;
        while(num > 0) {
            int a = num % 10;
            if (a % 2)
                odd.push_back(a);
            else
                even.push_back(a);
            num /= 10;
        }

        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end(), greater<int>());

        int ans = 0;
        int j = 0, k = 0;
        for (int i = 0; i < s.size(); i++) {
            int a = s[i]-'0';
            ans *= 10;
            if (a % 2) {
                ans += odd[j];
                j++;
            }
            else {
                ans += even[k];
                k++;
            }
        }

        return ans;
    }
};