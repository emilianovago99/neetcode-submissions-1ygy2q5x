class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>>vec;
        unordered_map<string,vector<string>>mapa; 
        for(int i = 0; i < strs.size();i++)
        { 
            string cad = strs[i];

            sort(cad.begin(),cad.end());

            mapa[cad].push_back(strs[i]);   
        }

        for(auto& it : mapa)
        { 
            vec.push_back(it.second);
        }
        return vec;
    }
};
