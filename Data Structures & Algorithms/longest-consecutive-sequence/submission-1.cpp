class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;

        unordered_set<int>s(nums.begin(),nums.end());
        int maximo = 0;

        for(int n : nums )
        {
            if(s.find(n-1) == s.end())
            {
                int actual = n;
                int actualmax = 0;
            

            while(s.find(actual+1) != s.end())
            {
                actual+=1;
                actualmax+=1;
            }
            maximo = max(maximo,actualmax);
            }
        }
    
    return maximo+1;
    }
};
