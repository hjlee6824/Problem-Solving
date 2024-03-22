#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, cnt = 0;
int board[100][100];
int dist[100][100];
bool visited[100][100];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
queue<pair<int, int>> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> board[i][j];

    // 육지에 번호를 부여
    // 시간복잡도: O(N^2) (각 i, j에 대해 O(N^2)이 아니다. 큐에는 모든 육지가 한번씩만 들어가기 때문이다.)
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 0 || visited[i][j]) continue;
            ++cnt;
            visited[i][j] = true;
            q.push({i, j});

            while (!q.empty()) {
                auto cur = q.front(); q.pop();
                board[cur.X][cur.Y] = cnt;

                for (int dir = 0; dir < 4; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];

                    if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
                    if (board[nx][ny] == 0 || visited[nx][ny]) continue;

                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }

    // 모든 육지를 큐에 넣는다
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] != 0) {
                dist[i][j] = 0;
                q.push({i, j});
            }
        }
    }

    int ans = 10000;

    // 섬을 확장시켜 나가다가 서로 만나면 각 육지에서 떨어진 거리의 합이 다리의 길이
    // 시간복잡도: O(N^2) (육지의 최대 개수는 N^2 이므로)
    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (board[cur.X][cur.Y] == board[nx][ny]) continue;
            if (board[nx][ny] != 0) {
                // 인접한 곳이 다른 섬인 곳을 찾아도 이를 바로 출력하고 종료하면 틀린다.
                // 지도의 위쪽에서 먼저 계산된 값이 최단거리가 아닐 수 있기 때문이다.
                ans = min(ans, dist[cur.X][cur.Y] + dist[nx][ny]);
            } else {
                board[nx][ny] = board[cur.X][cur.Y]; // 육지 확장
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                q.push({nx, ny});
            }
        }
    }

    cout << ans;

    return 0;
}