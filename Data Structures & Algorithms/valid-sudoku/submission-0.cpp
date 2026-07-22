class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int rows=0; rows<9; rows++){//for doing rows
            unordered_set<char> seen;
            for(int i=0; i<9; i++){
                if(board[rows][i]=='.') continue;
                if(seen.count(board[rows][i])) return false;
                seen.insert(board[rows][i]);
            }
        }

        //for columns
        for(int col=0; col<9; col++){
            unordered_set<char> seen;
            for(int i=0; i<9; i++){
                if(board[i][col]=='.') continue;
                if(seen.count(board[i][col])) return false;
                seen.insert(board[i][col]);
            }
        }


        //for 3x3 boxes
        for(int squares=0; squares<9; squares++){
            unordered_set<char> seen;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    int row = (squares/3)*3+i;
                    int col = (squares%3)*3+j;
                    if(board[row][col]=='.') continue;
                    if(seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
