#include <bits/stdc++.h>
using namespace std;

int N, M, x, y, K, command;
int board[20][20];
int dice[6];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

// 윗면이 1, 동쪽을 바라보는 방향이 3이라 가정한 dice[]의 index
//   2
// 4 1 3
//   5
//   6

// 위 전개도를 기준으로 각 방향으로 굴렸을 때 주사위 값을 바꿀 index
int idx[4][4] = {
    {1, 4, 6, 3}, // 동
    {1, 3, 6, 4}, // 서
    {1, 5, 6, 2}, // 북
    {1, 2, 6, 5}  // 남
};

void roll(int dir) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    // 범위 벗어나면 종료
    if (nx < 0 || nx >= N || ny < 0 || ny >= M) return;
    
    x = nx;
    y = ny;

    int tmp[6];
    for (int i = 0; i < 6; ++i)
        tmp[i] = dice[i];

    // 주사위 굴리기 처리
    for (int i = 0; i < 4; ++i)
        tmp[idx[dir][i] - 1] = dice[idx[dir][(i + 1) % 4] - 1];

    for (int i = 0; i < 6; ++i)
        dice[i] = tmp[i];

    if (board[x][y] == 0) {
        board[x][y] = dice[5];
    }
    else {
        dice[5] = board[x][y];
        board[x][y] = 0;
    }

    cout << dice[0] << '\n';
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
        roll(command - 1); // 인덱스로 사용하기 위해 1 감소
    }

    return 0;
}