class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if (nums.size() == 1)
            return 0;

        int left = 0, right = nums.size()-1;

        while(left <= right) {

            int mid = left + (right - left) / 2;

            if (mid > 0 and nums[mid] < nums[mid-1]) { // the value on the left is bigger than the mid, so there is a possible answer there.
                right = mid - 1;
            }
            else if (mid < nums.size() - 1 and nums[mid] < nums[mid + 1]) { // the value on the right is bigger than the mid, so there is a possible answer.
                left = mid + 1;
            }
            else {
                return mid;
            }
        }
        return 0;
    }
};