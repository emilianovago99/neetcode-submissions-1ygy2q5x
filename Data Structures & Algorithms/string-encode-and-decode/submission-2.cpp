class Solution {
public:

    string encode(vector<string>& strs) {

        string encoded_string;

        if(strs.empty())
            return "";

        for(string i : strs)
        {            
            encoded_string += to_string(i.size());
            encoded_string += '@';
            encoded_string += i;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string>strs;
        int i = 0;

        while(i < s.size())
        {
            int j = i;

            while(j < s.size() && s[j] != '@')
            {
                j++;
            }

            int t = stoi(s.substr(i, j - i));

            int inicio = j + 1;


            strs.push_back(s.substr(inicio, t));

            i = inicio + t;
        }

        return strs;

    }
};