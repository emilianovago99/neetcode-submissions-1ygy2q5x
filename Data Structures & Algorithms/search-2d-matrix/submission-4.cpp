class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int rowLow = 0, rowHigh = rows - 1;
        while (rowLow <= rowHigh) {
            int rowMid = rowLow + (rowHigh - rowLow) / 2;
            if (matrix[rowMid][0] <= target && target <= matrix[rowMid][cols - 1]) {
                rowLow = rowMid; 
                break;
            } else if (matrix[rowMid][0] > target) {
                rowHigh = rowMid - 1;
            } else {
                rowLow = rowMid + 1;
            }
        }

        if (rowLow > rowHigh) return false;
        
        int targetRow = rowLow;

        int colLow = 0, colHigh = cols - 1;
        while (colLow <= colHigh) {
            int colMid = colLow + (colHigh - colLow) / 2;
            if (matrix[targetRow][colMid] == target) {
                return true;
            } else if (matrix[targetRow][colMid] < target) {
                colLow = colMid + 1;
            } else {
                colHigh = colMid - 1;
            }
        }
        
        return false;
    }
};
