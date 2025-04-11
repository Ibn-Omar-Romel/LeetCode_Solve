class Solution {
public:
    int averageValue(vector<int>& nums) {

        int total_Sum = 0, count = 0;

        for (auto x : nums) {
            int temp = x;

            if (x % 2 == 0) {
                int sum = 0;

                while (x > 0) {
                    sum += (x % 10);
                    x /= 10;
                }

                if (sum % 3 == 0) {
                    total_Sum += temp;
                    count++;
                    cout << temp << endl;
                }
            }
        }
        if (count == 0)
            return 0;

        int value = floor((double)total_Sum / (double)count);
        return value;
    }
};