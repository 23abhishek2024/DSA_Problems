class Solution {
public:
    unordered_map<int, bool> leftrowcheck;
    unordered_map<int, bool> upperleftdiagonalcheck;
    unordered_map<int, bool> bottomleftdiagonalcheck;
    void store_solution(vector<vector<char>> &board, int n, vector<vector<string>> &ans){
        vector<string> temp;
         for (int i = 0; i < n; i++){
            string output="";
              for (int j = 0; j < n; j++){
                 output.push_back(board[i][j]);
                }
        temp.push_back(output);
        }
    ans.push_back(temp);
}
    bool is_safe(vector<vector<char>> &board, int row, int col, int n){
    if (leftrowcheck[row] == true){
        return false;
    }
    if (upperleftdiagonalcheck[n - 1 + col - row] == true){
        return false;
    }
    if (bottomleftdiagonalcheck[row + col] == true){
        return false;
    }
    return true;
}
    void solve(vector<vector<char>> &board, int col, int n, vector<vector<string>> &ans){
    //base cae
    if (col >= n){
        store_solution(board, n,ans);
        return;
    }
    for (int row = 0; row < n; row++){
        if (is_safe(board, row, col, n)){
            board[row][col] = 'Q';
            leftrowcheck[row] = true;
            upperleftdiagonalcheck[n - 1 + col - row] = true;
            bottomleftdiagonalcheck[row + col] = true;
            // recursion
            solve(board, col + 1, n,ans);
            // back tracking
            board[row][col] = '.';
            leftrowcheck[row] = false;
            upperleftdiagonalcheck[n - 1 + col - row] = false;
            bottomleftdiagonalcheck[row + col] = false;
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n, vector<char>(n, '.'));
        vector<vector<string>> ans;
        int col = 0;
        solve(board, col, n, ans);
        return ans;
    }
};
