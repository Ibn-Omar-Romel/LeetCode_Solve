class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum = 0, multiple = 1;
        int temp = n;
        while(n > 0) {
            int rem = n % 10;
            sum += rem;
            multiple *= rem;
            n /= 10;
        }

        int value = sum + multiple;
        if (temp % value == 0) {
            return true;
        }
        return false;
    }
};