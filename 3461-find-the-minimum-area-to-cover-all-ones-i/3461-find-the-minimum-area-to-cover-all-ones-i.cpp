class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        
        int rowStart = INT_MAX, colStart = INT_MAX;
        int rowEnd = -1, colEnd = -1;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                
                if (grid[i][j] == 1) {
                    rowStart = min(rowStart, i);
                    rowEnd = max(rowEnd, i);

                    colStart = min(colStart, j);
                    colEnd = max(colEnd, j);
                }       
            }
        }
        return (rowEnd - rowStart + 1) * (colEnd - colStart + 1);
    }
};