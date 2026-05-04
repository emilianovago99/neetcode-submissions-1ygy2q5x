class Solution {
public:
    int characterReplacement(string s, int k) {
    if (k >= s.length()) return s.length();

    int vidas = k;
    map <char, int> mapa;

    int maxFreq = 0;
    int maxLen = 0; 

    int l = 0;
    for(int r = 0 ; r < s.length(); r++){
        mapa[s[r]]++;

        if(mapa[s[r]] > maxFreq){
            maxFreq = mapa[s[r]];
        }

        while( (r-l+1) - maxFreq > vidas ){
            mapa[s[l]]--;
            l++;

        }

        maxLen = max( maxLen , r-l+1);
    }

        return maxLen;
    }
};