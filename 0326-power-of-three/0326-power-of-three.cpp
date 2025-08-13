class Solution {
public:
    bool isPowerOfThree(int n) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        if (n < 1) {
            return false;
        }
        while (n > 1) {
            if (n % 3 == 0) {
                n /= 3;
            } else
                return false;
        }
        return true;


        // using resursion:
        // if(n == 1) {
        //     return true;
        // }
        // else if ( n < 1 )
        //     return false;

        // if ( n % 3 != 0 )
        //     return false;
        
        // return isPowerOfThree(n/3);
    }
};