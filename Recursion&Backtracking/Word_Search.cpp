/*
Given an m x n grid of characters board and a string word, return true if word exists in the grid.
The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

Example 1:
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true

Example 2:
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
Output: true

Example 3:
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
Output: false
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int ii, int jj, int idx) {
        if (idx == word.size())
            return true;
        if (ii < 0 || jj < 0 || ii >= board.size() || jj >= board[0].size() || board[ii][jj] != word[idx]) {
            return false;
        }
        char tmp_c = board[ii][jj];
        board[ii][jj] = '#'; // mark visited
        bool found = dfs(board, word, ii - 1, jj, idx + 1) ||
                     dfs(board, word, ii, jj - 1, idx + 1) ||
                     dfs(board, word, ii + 1, jj, idx + 1) ||
                     dfs(board, word, ii, jj + 1, idx + 1);
        board[ii][jj] = tmp_c; // backtrack
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    // Predefined board
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    // Predefined word
    string word = "ABCCED";

    Solution sol;
    bool result = sol.exist(board, word);

    cout << "Word \"" << word << "\" exists in board? " 
         << (result ? "Yes" : "No") << endl;

    return 0;
}
