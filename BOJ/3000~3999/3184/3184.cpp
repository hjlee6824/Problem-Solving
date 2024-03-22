#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int R, C;
int total_wolf = 0, total_sheep = 0;
char arr[250][250];
bool visited[250][250];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;

void bfs(int x, int y) {
    int wolf = 0, sheep = 0;

    if (arr[x][y] == 'v') ++wolf;
    if (arr[x][y] == 'o') ++sheep;

    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (arr[nx][ny] == '#' || visited[nx][ny]) continue;

            if (arr[nx][ny] == 'v') ++wolf;
            if (arr[nx][ny] == 'o') ++sheep;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }

    if (sheep > wolf) total_wolf -= wolf;
    else total_sheep -= sheep; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> arr[i][j];

            if (arr[i][j] == 'v') ++total_wolf;
            if (arr[i][j] == 'o') ++total_sheep;
        }
    }

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (arr[i][j] != '#' && !visited[i][j]) {
                bfs(i, j);
            }
        }
    }

    cout << total_sheep << ' ' << total_wolf;

    return 0;
}