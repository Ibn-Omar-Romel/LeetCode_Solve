class Solution {
public:
    int findLHS(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int i = 0, j = 0;

        int length = 0;
        while(j < nums.size()) {
            
            while(nums[j]-nums[i] > 1) {
                i++;
            }
            if(nums[j] - nums[i] == 1)
                length = max(length, j-i+1);
            j++;
        }
        return length;
    }
};