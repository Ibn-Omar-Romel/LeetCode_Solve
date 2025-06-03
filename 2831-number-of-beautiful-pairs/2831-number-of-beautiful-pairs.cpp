class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        
        int n = nums.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            
            int a = nums[i];
            while(a >= 10) {
                a /= 10;
            }

            for (int j = i+1; j < n; j++) {
                int b = nums[j];
                if (b >= 10)
                    b = b % 10;

                if (__gcd(a,b) == 1) {
                    //cout << a << " " << b << endl;
                    total++;
                }
            }
        }
        return total;
    }
};