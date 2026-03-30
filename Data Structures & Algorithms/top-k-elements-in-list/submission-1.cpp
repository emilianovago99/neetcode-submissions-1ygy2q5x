class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
        unordered_map<char, int> mapa;
        vector<int>res;

    for (int c : nums) {
        mapa[c]++;
    }

    if(mapa.size() == 1)
    {
        res.push_back(nums[0]);
        return res;
    }
        

    int max = nums.size();

    vector<vector<int>>vec(max+1);


        for(auto const& [num,freq] : mapa)
        {
            vec[freq].push_back(num);
        }

        vector<int>aux;

        for(int i = max-1; i >= 0; i--)
        {
            for(int numero : vec[i])
                aux.push_back(numero);
        }

        for(int i = 0; i < k;i++)
        {
            res.push_back(aux[i]);
        }


        return res;


    }
};
