class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        double maxLength = 0.0;
        int maxArea = INT_MIN;

        for (int i = 0; i < dimensions.size(); i++) {

            int length = dimensions[i][0];
            int width = dimensions[i][1];

            double diagonal = (length * length) + (width * width);
            int area = length * width;

            if (diagonal > maxLength) {
                maxArea = area;
                maxLength = diagonal;
            }
            else if (maxLength == diagonal) {
                maxArea = max(area, maxArea);
            }
        }
        return maxArea;
    }
};