class Solution {
public:

    bool isPowerOfTwo(int n) {

        if ( n <= 0 )
            return false;

        // double b = log2(n);
        // return b == (int)b ;
        
        return (n && !(n & (n-1)));
    }
};