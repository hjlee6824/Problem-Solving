#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int ans;
bool is_popped;
char board[12][6];
bool visited[12][6];
bool popped[12][6];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

// 뿌요들을 떨어뜨리는 함수
void fall() {
    char tmp[12];

    for (int j = 0; j < 6; ++j) {
        int idx = 0;
        fill(tmp, tmp + 12, '.');

        for (int i = 11; i >= 0; --i)
            if (board[i][j] != '.') tmp[idx++] = board[i][j];

        for (int i = 0; i < 12; ++i)
            board[11 - i][j] = tmp[i];
    }
}

// 연결된 뿌요가 4개 이상이면 터뜨린다
void bfs(int x, int y) {
    queue<pair<int, int>> q;
    vector<pair<int, int>> v; // 터뜨릴 뿌요들의 좌표
    char color = board[x][y];

    q.push({x, y});
    visited[x][y] = true;
    v.push_back({x, y});

    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= 12 || ny < 0 || ny >= 6) continue;
            if (board[nx][ny] != color || visited[nx][ny]) continue;

            q.push({nx, ny});
            visited[nx][ny] = true;
            v.push_back({nx, ny});
        }
    }

    if (v.size() >= 4) {
        is_popped = true;
        for (auto e : v)
            board[e.X][e.Y] = '.';
    }    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 12; ++i)
        for (int j = 0; j < 6; ++j)
            cin >> board[i][j];

    do {
        is_popped = false;
        for (int i = 0; i < 12; ++i)
            fill(visited[i], visited[i] + 6, false);

        for (int i = 0; i < 12; ++i) {
            for (int j = 0; j < 6; ++j) {
                if (board[i][j] != '.' && !visited[i][j])
                    bfs(i, j);
            }
        }

        if (is_popped) ++ans;
        fall();
    } while (is_popped);

    cout << ans;
    return 0;
}