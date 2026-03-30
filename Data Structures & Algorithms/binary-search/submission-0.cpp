class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int medio = (r-l) /2;

        while(l <= r)
        {
            medio  = l + (r - l) /2;
            if(nums[medio] == target)
            {
                return medio;
            }
            if(nums[medio] < target)
            {
                l = medio +1 ;
            }
            else if(nums[medio] > target)
            {
                r = medio-1;
            }
        }
        return -1;        
    }
};
