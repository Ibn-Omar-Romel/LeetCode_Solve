class Solution {
public:
    int numRabbits(vector<int>& answers) {
        
        int total = 0;
        map<int,int>mp;

        for (auto x : answers) {
            
            if (x == 0)
                total += 1;

            else if (mp.find(x) == mp.end()) {
                total += (x+1);
                mp[x] = x;
            }
            else {
                mp[x]--;
                if (mp[x] == 0) {
                    mp.erase(x);
                }
                    
            }
        }
        return total;
    }
};