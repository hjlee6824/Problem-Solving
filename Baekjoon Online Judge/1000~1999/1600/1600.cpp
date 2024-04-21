#include <bits/stdc++.h>
using namespace std;

int K, W, H;
int board[200][200];
int dist[200][200][31];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int horse_dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int horse_dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
queue<tuple<int, int, int>> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> K >> W >> H;

    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            cin >> board[i][j];

    for (int i = 0; i < H; ++i)
        for (int j = 0; j < W; ++j)
            fill(dist[i][j], dist[i][j] + 31, -1);

    dist[0][0][0] = 0;
    q.push({0, 0, 0});

    int ans = 999999;
    bool finished = false;

    while (!q.empty()) {
        auto [cur_x, cur_y, horse] = q.front(); q.pop();
        int cur_dist = dist[cur_x][cur_y][horse];

        // 도착 지점에 도착했다면
        if (cur_x == H - 1 && cur_y == W - 1) {
            ans = min(ans, dist[cur_x][cur_y][horse]);
            finished = true;
        }

        // 상하좌우로 이동
        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur_x + dx[dir];
            int ny = cur_y + dy[dir];

            if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
            // 가려고 하는 곳이 벽이 아니고 아직 방문한 적이 없는 경우
            if (board[nx][ny] == 0 && dist[nx][ny][horse] == -1) {
                dist[nx][ny][horse] = cur_dist + 1;
                q.push({nx, ny, horse});
            }
        }

        // 말처럼 이동
        if (horse < K) {
            for (int dir = 0; dir < 8; ++dir) {
                int nx = cur_x + horse_dx[dir];
                int ny = cur_y + horse_dy[dir];

                if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;

                if (board[nx][ny] == 0 && dist[nx][ny][horse + 1] == -1) {
                    dist[nx][ny][horse + 1] = cur_dist + 1;
                    q.push({nx, ny, horse + 1});
                }
            }
        }
    }

    if (finished) cout << ans;
    else cout << -1;

    return 0;
}