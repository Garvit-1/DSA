class Solution {
public:
bool isSafe(vector<string> board,int row,int col){
    int i=row,j=col;

    while(i>=0 && j>=0){
        if(board[i][j]=='Q') return false;

        i--;j--;
    }
    i=row;j=col;

    while(j>=0){
        if(board[i][j]=='Q') return false;
        j--;
    }


    i=row;j=col;

    while(i<board.size() && j>=0){
        if(board[i][j]=='Q') return false;

        i++;j--;
    }

    return true;
    
}


void solve(vector<string> board,vector<vector<string>>& ans,int col){
    if(col>=board.size()){
        ans.push_back(board);
    }

    for(int i=0;i<board.size();i++){
        if(isSafe(board,i,col)){
        board[i][col]='Q';
        solve(board,ans,col+1);
        board[i][col]='.';
        }
    }

}
    vector<vector<string>> solveNQueens(int n) {
    vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }

      solve(board,ans,0);
return ans;

    }
};