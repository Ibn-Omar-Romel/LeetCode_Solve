class Solution {
public:
    int MOD = 1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
        vector<int> mp(26, 0);
        for (char x : s) {
            mp[x - 'a']++;
        }

        while (t--) {
            vector<int> temp(26, 0);
            for (int i = 0; i < 26; ++i) {
                int freq = mp[i];
                if (freq == 0) continue;

                if (i == 25) { // 'z'
                    temp[0] = (temp[0] + 1LL * freq) % MOD;  // 'a'
                    temp[1] = (temp[1] + 1LL * freq) % MOD;  // 'b'
                } else {
                    temp[i + 1] = (temp[i + 1] + 1LL * freq) % MOD;
                }
            }
            mp = temp;
        }

        int length = 0;
        for (int i = 0; i < 26; ++i) {
            length = (length + 1LL * mp[i]) % MOD;
        }

        return length;
    }

};