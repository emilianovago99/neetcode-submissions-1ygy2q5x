class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapa;
        for(int i = 0; i < nums.size();i++)
        {
            mapa.insert({nums[i],i});
        }
        int i = 0;
        auto it = mapa.find(0);
        for(i;i < nums.size();i++)
        {
            int nuevo = target - nums[i];
            if(mapa.find(nuevo) != mapa.end() && mapa[nuevo] != i)
            {
                 it = mapa.find(nuevo);
                 break;
            }

            
        }
        vector<int> vec2;
        vec2.push_back(i);
        vec2.push_back(it->second);
        sort(vec2.begin(),vec2.end());
        return vec2;



    }
};
