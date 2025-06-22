class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num == 1)
            return true;
        
        int l = 1, r = num;

        while(l <= r) {

            long long mid = l + (r-l) / 2;
            long long value = mid * mid;

            if (value == num){
                return true;
            }
            else if (value < num) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return false;
    }
};