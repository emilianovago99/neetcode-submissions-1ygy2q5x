class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int vec [26] = {0};
        
        for(int i : s)
        {
            vec[i - 'a']++; 
        }

        for(int i : t){
            vec[i - 'a']--;
        }

        for(int i = 0 ; i < 26; i++)
            {
                if(vec[i] != 0)
                    return false;
            }
        return true; 


    }
};
