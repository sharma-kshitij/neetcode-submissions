class Solution {
public:

    bool checkCols(vector<vector<char>>& board){
        for(int row = 0; row < 9; row++){
            unordered_map<char,int> mp;
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.'){
                    continue;
                }else if(mp.find(board[row][col])==mp.end()){
                    mp[board[row][col]]=1;
                }else return false;
            }
        }
        return true;
    }
    bool checkRows(vector<vector<char>>& board){
        for(int col = 0; col < 9; col++){
            unordered_map<char,int> mp;
            for(int row = 0; row < 9; row++){
                if(board[row][col] == '.'){
                    continue;
                }else if(mp.find(board[row][col])==mp.end()){
                    mp[board[row][col]]=1;
                }else return false;
            }
        }
        return true;
    }
    bool checkSqs(vector<vector<char>>& board){
        for(int sq=0;sq<9;sq++){
            unordered_map<char,int>mp;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    int row = (sq / 3) * 3 + i;
                    int col = (sq % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (mp.find(board[row][col]) == mp.end()) mp[board[row][col]]=1;
                    else return false;
                }
            }
        }
        return true;    
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return checkCols(board) && checkSqs(board) && checkRows(board);
    }
};
