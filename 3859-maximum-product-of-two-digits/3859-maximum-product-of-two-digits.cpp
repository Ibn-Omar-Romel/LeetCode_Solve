class Solution {
public:
    int maxProduct(int n) {
        
        vector<int>vec;
        while(n > 0) {
            vec.push_back(n % 10);
            n /= 10;
        }

        sort(vec.begin(), vec.end());
        int a = vec.size();
        return vec[a-1] * vec[a-2];
    }
};