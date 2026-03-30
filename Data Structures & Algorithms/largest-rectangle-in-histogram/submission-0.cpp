class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        
        stack<int> s; 
        int max_area = 0;

        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[i] < heights[s.top()]) {
                int indice_altura = s.top();
                s.pop();
                
                int altura = heights[indice_altura];
             
                int ancho = s.empty() ? i : i - s.top() - 1;
                
                max_area = max(max_area, altura * ancho);
            }
            
            s.push(i);
        }

        return max_area;
    }
};
