class Solution {
public:
    int arrangeCoins(int n) {
        
        int l = 1, r = n;
        int ans = 0;
        while( l <= r) {
            long long mid = l + (r-l) / 2;

            long long total = (mid * (mid + 1)) / 2;

            if (total <= n) {
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return ans;
    }
};