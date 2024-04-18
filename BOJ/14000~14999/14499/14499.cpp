#include <bits/stdc++.h>
using namespace std;

int N, M, x, y, K, command;
int board[20][20];
int dice[6];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int horizontal[4] = {6, 4, 1, 3}; // 전개도의 가로부분
int vertical[4] = {6, 2, 1, 5}; // 전개도의 세로부분

void roll(int dir) {
    int nx = x + dx[dir - 1];
    int ny = y + dy[dir - 1];

    // 범위 벗어나면 종료
    if (nx < 0 || nx >= N || ny < 0 || ny >= M) return;
    
    x = nx;
    y = ny;

    if (dir == 1) { // 동쪽
        rotate(horizontal, horizontal + 3, horizontal + 4);
        vertical[0] = horizontal[0];
        vertical[2] = horizontal[2];
    }
    else if (dir == 2) { // 서쪽
        rotate(horizontal, horizontal + 1, horizontal + 4);
        vertical[0] = horizontal[0];
        vertical[2] = horizontal[2];
    }
    else if (dir == 3) { // 북쪽
        rotate(vertical, vertical + 1, vertical + 4);
        horizontal[0] = vertical[0];
        horizontal[2] = vertical[2];
    }
    else { // 남쪽
        rotate(vertical, vertical + 3, vertical + 4);
        horizontal[0] = vertical[0];
        horizontal[2] = vertical[2];
    }

    if (board[x][y] == 0) {
        board[x][y] = dice[vertical[0] - 1];
    }
    else {
        dice[vertical[0] - 1] = board[x][y];
        board[x][y] = 0;
    }

    cout << dice[vertical[2] - 1] << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> x >> y >> K;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> board[i][j];

    while (K--) {
        cin >> command;
        roll(command);
    }

    return 0;
}