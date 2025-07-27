class Solution {
public:
    int countHillValley(vector<int>& nums) {
        
        // int left = nums[0];
        // int count = 0;
        // for (int i = 1; i < nums.size()-1; i++) {
        //     if (nums[i] != nums[i+1]) {
        //         if ((left < nums[i] and nums[i] > nums[i+1]) || (left > nums[i] and nums[i] < nums[i+1])) {
        //             count++;
        //         }
        //         left = nums[i];
        //     }
            
        // }
        // return count;

        int count = 0;
        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] == nums[i-1]) {
                continue;
            }

            int left = 0;
            for (int j = i-1; j >= 0; j--) {
                if (nums[j] > nums[i]) {
                    left = 1;
                    break;
                }
                else if (nums[j] < nums[i]) {
                    left = -1;
                    break;
                }
            }

            int right = 0;
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[j] > nums[i]) {
                    right = 1;
                    break;
                }
                else if (nums[j] < nums[i]) {
                    right = -1;
                    break;
                }
            }

            if (left == right and left != 0) {
                count++;
            }
        }
        return count;
    }
};