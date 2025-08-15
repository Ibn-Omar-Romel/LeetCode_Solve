class Solution {
public:
    bool isPowerOfFour(int n) {
        
        // if(n == 1) {
        //     return true;
        // }
        // else if ( n < 1 )
        //     return false;

        // if ( n % 4 != 0 )
        //     return false;
        
        // return isPowerOfFour(n/4);

        while(n > 0) {
            if (n % 4 != 0)
                break;
            n /= 4;
        }

        return (n == 1)? true : false;
    }
};