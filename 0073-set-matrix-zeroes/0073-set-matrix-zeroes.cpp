class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        unordered_set<int> rowst, colst;
        for (int i = 0; i < matrix.size(); i++) {
            
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    rowst.insert(i);
                    colst.insert(j);
                }
            }
        }

        for (auto i : rowst) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[i][j] = 0;
            }
        }

        for (auto j : colst) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][j] = 0;
            }
        }
    }
};