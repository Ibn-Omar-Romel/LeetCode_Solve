class Solution {
public:
    // string clearStars(string s) {
    //     map<char, int>mp;
    //     for (auto x : s) {
    //         if (x != '*')
    //             mp[x]++;
    //     }

    //     int n = s.size();

    //     set<int>st;

    //     for (int i = n-1; i >= 0; i--) {
    //         if (s[i] == '*') {
                
    //             //cout << i << " ";
    //             for (int j = i-1; j >= 0; j--) {
    //                 if (s[j] == mp.begin()->first and st.find(j) == st.end()) {
    //                     st.insert(j);
    //                     mp[s[j]]--;
    //                     if (mp[s[j]] == 0)
    //                         mp.erase(s[j]);

    //                     break;
    //                 }
    //             }
    //         } else if(st.find(i) == st.end()){
    //             mp[s[i]]--;
    //             if (mp[s[i]] == 0)
    //                 mp.erase(s[i]);
    //         }
    //     }
    //     string ans = "";
    //     for (int i = 0; i < n; i++) {
    //         if (st.find(i) == st.end() and s[i] != '*')
    //             ans.push_back(s[i]);
    //     }
    //     return ans;
    // }

    string clearStars(string s) {
        string result;
        multiset<char> chars;

        for (char c : s) {
            if (c != '*') {
                result.push_back(c);
                chars.insert(c);
            } else {
                
                char smallest = *chars.begin();
                chars.erase(chars.find(smallest));
                
                for (int i = result.size() - 1; i >= 0; --i) {
                    if (result[i] == smallest) {
                        result.erase(result.begin() + i);
                        break;
                    }
                }
            }
        }
        return result;
    }

};