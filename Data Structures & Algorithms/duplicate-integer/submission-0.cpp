class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> num;

        for(int i : nums)
        {
            num.insert(i);
        }

        if(num.size() != nums.size())
        {
            return true;
        }
        
        return false;
    }
};