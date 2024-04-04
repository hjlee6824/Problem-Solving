#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int ans;
string seat[5];
int mask[25];
int board[5][5];
bool visited[5][5];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

// 영역이 전부 인접해있다면 BFS을 1회 수행했을 때 7개의 영역을 전부 방문했는지 확인
bool bfs(vector<pair<int, int>>& v) {
    queue<pair<int, int>> q;
    
    int x = v.front().X, y = v.front().Y;
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
            if (board[nx][ny] == 0 || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }

    for (auto c : v)
        if (!visited[c.X][c.Y])
            return false;

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 5; ++i)
        cin >> seat[i];

    fill(mask + 7, mask + 25, 1);

    do {
        int S = 0;
        vector<pair<int, int>> v;

        for (int i = 0; i < 5; ++i) { // BFS 탐색 전 방문 배열 초기화
            fill(board[i], board[i] + 5, 0);
            fill(visited[i], visited[i] + 5, false);
        }
        
        for (int i = 0; i < 25; ++i) {
            if (mask[i] == 0) {
                int x = i / 5, y = i % 5;
                if (seat[x][y] == 'S') ++S;
                board[x][y] = 1;
                v.push_back({x, y});
            }
        }

        ans += (S >= 4 && bfs(v));
    } while (next_permutation(mask, mask + 25)); // 25C7 = 480700

    cout << ans;

    return 0;
}