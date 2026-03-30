class Solution {
public:
    int trap(vector<int>& height) {
         if (height.empty()) return 0;
        
        int n = height.size();
        int l = 0, r = n - 1;
        int maxL = height[0], maxR = height[n - 1];
        int agua = 0;
        
        while (l < r) {
            if (maxL < maxR) {
                l++;
                maxL = max(maxL, height[l]);
                agua += maxL - height[l];
            } else {
                r--;
                maxR = max(maxR, height[r]);
                agua += maxR - height[r];
            }
        }
        return agua;
    }
};
