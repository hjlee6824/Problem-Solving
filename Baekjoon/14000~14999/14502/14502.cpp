#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int input[8][8];
int board[8][8];
int visited[8][8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<pair<int, int>> blank;
queue<pair<int, int>> q;

void init() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            board[i][j] = input[i][j];

            if (input[i][j] == 2) {
                q.push({i, j});
                visited[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        fill(visited[i], visited[i] + m, 0);
}

int bfs() {
    int safe_area = 0;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (board[nx][ny] != 0 || visited[nx][ny]) continue;

            board[nx][ny] = 2;
            visited[nx][ny] = 1;
            q.push({nx, ny});
        }
    }

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (board[i][j] == 0) ++safe_area;

    return safe_area;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> input[i][j];
            if (input[i][j] == 0) blank.push_back({i, j});
        }
    }

    vector<int> brute(blank.size(), 1);
    fill(brute.begin(), brute.end() - 3, 0);
    int ans = 0;

    do {
        init();
        // 벽 세우기
        for (int i = 0; i < brute.size(); ++i)
            if (brute[i] == 1) board[blank[i].X][blank[i].Y] = 1;

        ans = max(ans, bfs());
    } while (next_permutation(brute.begin(), brute.end())); // 빈 칸 중에서 3곳을 선택, 64C3 = 41664

    cout << ans;
    return 0;
}