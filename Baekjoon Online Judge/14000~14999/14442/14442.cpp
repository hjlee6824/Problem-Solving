#include <bits/stdc++.h>
using namespace std;

int N, M, K;
char board[1000][1000];
int dist[1000][1000][11];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> K;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> board[i][j];
        }
    }

    queue<tuple<int, int, int>> q;
    dist[0][0][0] = 1;
    q.push({0, 0, 0});

    while (!q.empty()) {
        auto [cur_x, cur_y, wall] = q.front(); q.pop();
        int cur_dist = dist[cur_x][cur_y][wall];

        if (cur_x == N - 1 && cur_y == M - 1) {
            cout << cur_dist;
            return 0;
        }

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur_x + dx[dir];
            int ny = cur_y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;

            // 벽을 부쉈거나 부수지 않은 경우에 탐색하는 곳이 길인 경우
            if (board[nx][ny] == '0' && dist[nx][ny][wall] == 0) {
                dist[nx][ny][wall] = cur_dist + 1;
                q.push({nx, ny, wall});
            }

            // 벽을 이미 부순 곳을 또 부수는 것을 막기 위해 조건 추가
            if (board[nx][ny] == '1' && wall < K && dist[nx][ny][wall + 1] == 0) {
                dist[nx][ny][wall + 1] = cur_dist + 1;
                q.push({nx, ny, wall + 1});
            }
        }
    }

    cout << -1;

    return 0;
}