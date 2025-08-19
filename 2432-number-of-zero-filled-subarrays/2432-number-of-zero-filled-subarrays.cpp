class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        long long total = 0;
        long long count = 0;
        for (auto x : nums) {
            if (x == 0) {
                count++;
            }
            else {
                long long value = (count * (count + 1)) / 2;
                total += value;
                count = 0;
            }
        }
        if (count != 0) {
            long long value = (count * (count + 1)) / 2;
            total += value;
        }
        return total;
    }
};