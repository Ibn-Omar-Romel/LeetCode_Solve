class Solution {
public:
    int findNumbers(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int count = 0;
        for (auto& x : nums) {
            int a = 0;
            while(x > 0) {
                a++;
                x /= 10;
            }
            if (a % 2 == 0)
                count++;
        }
        return count;
    }
};