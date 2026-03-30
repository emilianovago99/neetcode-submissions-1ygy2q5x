class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxi = 0;

        for(int j = heights.size()-1;j > 0;j--)
        {
            for(int i = 0; i < j;i++)
            {
            if(maxi < (j - i) * min(heights[j], heights[i]))
                maxi =(j - i) * min(heights[j], heights[i]);
            }
        }

        return maxi;

    }
};
