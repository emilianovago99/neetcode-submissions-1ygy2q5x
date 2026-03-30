class Solution {
public:
    int maxArea(vector<int>& heights) {
        int izq = 0, der = heights.size() - 1;
        int maxArea = 0;
        
        while (izq < der) {
            int actual = (der - izq) * min(heights[izq], heights[der]);
            maxArea = max(maxArea, actual);
            
            if (heights[izq] < heights[der]) {
                izq++;
            } else {
                der--;
            }
        }
        return maxArea;
    }
};
