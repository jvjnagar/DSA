// find 1s clusters in a NxN matrix which containes 0s and 1s
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &mat, vector<vector<int>> &visited, int i, int j, int N, int ct) {
    if (i >= 0 && j >= 0 && i < N && j < N) {
        if (mat[i][j] == 1 && visited[i][j] == 0) {
            visited[i][j] = ct;
            dfs(mat, visited, i + 1, j, N, ct);
            dfs(mat, visited, i, j + 1, N, ct);
            dfs(mat, visited, i - 1, j, N, ct);
            dfs(mat, visited, i, j - 1, N, ct);
        }
    }
}

int main() {
    int N;
    cout << "Enter the matrix dimension: ";
    cin >> N;

    vector<vector<int>> mat(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Enter row " << i << ", column " << j << ": ";
            cin >> mat[i][j];
        }
    }

    int ct = 0;
    vector<vector<int>> visited(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 1 && visited[i][j] == 0) {
                ct++;
                dfs(mat, visited, i, j, N, ct);
            }
        }
    }

    cout << "Number of clusters = " << ct << endl;
    return 0;
}
