class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string>sett;

        for(int r = 0; r < 9 ; ++r)
            {
                for(int c = 0; c < 9;++c)
                {
                    if(board[r][c] == '.')
                     continue;

                     string s = string(1,board[r][c]);

                     string renglon = s + "@renglon" + to_string(r);
                     string columna = s + "@columna" + to_string(c);
                     string cuadro = s + "@cuadro" + to_string(r/3) + to_string(c/3);

                     if(!sett.insert(columna).second||!sett.insert(renglon).second||!sett.insert(cuadro).second)
                     {
                        return false;
                     }
                }

                
            }
        return true;
    }
};
