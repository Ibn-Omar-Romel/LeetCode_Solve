class Solution {
public:
    int findGCD(vector<int>& nums) {

        int a = *min_element(nums.begin(), nums.end());
        int b = *max_element(nums.begin(), nums.end());

        if (b > a)
            swap(a, b);
        return __gcd(b,a%b);
    }
};