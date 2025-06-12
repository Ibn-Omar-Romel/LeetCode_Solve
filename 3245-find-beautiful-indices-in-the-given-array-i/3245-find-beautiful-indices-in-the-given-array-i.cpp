class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        
        vector<int>veca;
        for(int i = 0; i+a.size() <= s.size(); i++) {
            if (s.substr(i, a.size()) == a) {
                veca.push_back(i);
            }
        }

        vector<int>vecb;
        for (int i = 0; i+b.size() <= s.size(); i++) {
            if (s.substr(i, b.size()) == b) {
                vecb.push_back(i);
            }
        }

        vector<int>vec;
        for (auto i : veca) {
            for (auto j : vecb) {
                if (abs(i-j) <= k){
                    vec.push_back(i);
                    break;
                }
            }
        }
        sort(vec.begin(), vec.end());
        return vec;
    }


};