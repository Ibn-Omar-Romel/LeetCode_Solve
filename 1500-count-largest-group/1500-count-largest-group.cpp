class Solution {
public:
    int countLargestGroup(int n) {
        
        map<int, int> digitSumFreq;
        for (int i = 1; i <= n; i++) {
            int x = i, sum = 0;
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            digitSumFreq[sum]++;
        }

        int maxFreq = 0, count = 0;
        for (auto [key, freq] : digitSumFreq) {
            if (freq > maxFreq) {
                maxFreq = freq;
                count = 1;
            } else if (freq == maxFreq) {
                count++;
            }
        }

        return count;
    }
};