#include <bits/stdc++.h>
using namespace std;

int ans = 0x7f7f7f7f;
bool escaped;
int cube[5][5][5];
int board[5][5][5];
int dx[6] = {0, 0, 0, 0, -1, 1};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {-1, 1, 0, 0, 0, 0};

void bfs() {
    int dist[5][5][5] = {0,};
    queue<tuple<int, int, int>> q;
    q.push({0, 0, 0});
    dist[0][0][0] = 0;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        int x, y, z;
        tie(x, y, z) = cur;

        for (int dir = 0; dir < 6; ++dir) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            int nz = z + dz[dir];

            if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || nz < 0 || nz >= 5) continue;
            if (cube[nx][ny][nz] == 0 || dist[nx][ny][nz] != 0) continue;

            q.push({nx, ny, nz});
            dist[nx][ny][nz] = dist[x][y][z] + 1;
        }
    }

    if (dist[4][4][4] > 0) {
        escaped = true;
        ans = min(ans, dist[4][4][4]);
    }
}

// 판을 시계 방향으로 90도 만큼 cnt번 회전
void rotate_board(int idx, int cnt) {
    int tmp[5][5];

    while (cnt--) {
        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                tmp[i][j] = cube[idx][4 - j][i];

        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                cube[idx][i][j] = tmp[i][j];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            for (int k = 0; k < 5; ++k)
                cin >> board[i][j][k];

    // 판을 쌓는 순서를 결정
    int board_num[5] = {0, 1, 2, 3, 4};

    do {
        // 각 판에 대해 회전을 적용, 경우의 수: 4^5 = 1024
        for (int tmp = 0; tmp < 1024; ++tmp) {
            // 5개의 판을 쌓는다, O(5^3) = 125
            for (int i = 0; i < 5; ++i)
                for (int j = 0; j < 5; ++j)
                    for (int k = 0; k < 5; ++k)
                        cube[i][j][k] = board[board_num[i]][j][k];

            int brute = tmp;
            for (int i = 0; i < 5; ++i) {
                int rot = brute % 4;
                brute /= 4;
                rotate_board(i, rot);
            }
            
            if (cube[0][0][0] == 1 && cube[4][4][4] == 1) bfs(); // BFS 탐색 (O(5^3)) = 125
        }
    } while (next_permutation(board_num, board_num + 5)); // 판을 쌓는 경우의 수: 5! = 120

    if (escaped) cout << ans;
    else cout << -1;

    return 0;
}

// 시간복잡도: 120 * 1024 * (125 + 125) = 약 3000만