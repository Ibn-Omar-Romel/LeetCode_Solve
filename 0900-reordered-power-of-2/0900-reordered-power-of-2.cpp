class Solution {
public:
    bool reorderedPowerOf2(int n) {

        if ((n && !(n & (n-1))) == 1)
            return true;

        

        vector<int>vec;
        while(n > 0) {
            vec.push_back(n % 10);
            n /= 10;
        }
        sort(vec.begin(), vec.end());
        do {
            int num = 0;
            for (auto a : vec) {
                num = (num * 10) + a;
            }

            string s = to_string(num);
            if ((num && !(num & (num-1))) == 1  and vec.size() == s.size()) {
                
                return true;
            }
                

        } while(next_permutation(vec.begin(), vec.end()));

        return false;
    }
};