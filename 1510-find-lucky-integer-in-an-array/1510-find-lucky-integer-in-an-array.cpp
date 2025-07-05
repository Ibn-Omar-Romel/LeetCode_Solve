class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for (auto x : arr) {
            mp[x]++;
        }

        int ans = -1;
        for (auto [a,b] : mp) {
            if (a == b)
                ans = a;
        }
        return ans;
    }
};