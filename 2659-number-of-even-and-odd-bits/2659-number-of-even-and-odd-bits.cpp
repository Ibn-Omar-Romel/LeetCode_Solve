class Solution {
public:
    vector<int> evenOddBit(int n) {

        int even = 0;
        int odd = 0;

        bool isEven = true;
        while(n > 0) {
            int rem = n % 2;
            if (rem == 1) {
                if (isEven) {
                    even++;
                }
                else {
                    odd++;
                }
            }
            if (isEven)
                isEven = false;
            else
                isEven = true;
                
            n /= 2;
        }
        return {even, odd};
    }
};