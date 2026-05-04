class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mapa;
        int izq = 0;
        int res = 0;


        for(int der = 0; der < s.size();der++)
        {
            while(mapa.find(s[der]) != mapa.end())
            {
                mapa.erase(s[izq]);
                izq++;
            }

            mapa[s[der]]++;
            res = max(res,der-izq+1);
        }

        return res;
    }
};
