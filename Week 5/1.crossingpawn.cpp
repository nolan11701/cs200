#include <iostream>

using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    long long board[n + 1][m + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            board[i][j] = 1;
        }
    }

    int px[8] = {+2, +2, +1, -1, -2, -2, -1, +1};
    int py[8] = {+1, -1, -2, -2, -1, +1, +2, +2};
    board[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        if (x + px[i] >= 0 && y + py[i] >= 0 && x + px[i] <= n && y + py[i] <= m) {
            board[x + px[i]][y + py[i]] = 0;
        }
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (board[i][j] == 0)
                continue;
            else if (i == 0 && j == 0)
                continue;
            else if (i == 0) {
                board[i][j] = board[i][j - 1];
            } else if (j == 0) {
                board[i][j] = board[i - 1][j];
            } else {
                board[i][j] = board[i - 1][j] + board[i][j - 1];
            }
        }
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         cout << board[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    cout << board[n][m];
}