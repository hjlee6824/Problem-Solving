#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, m;
int board[50][50];
int dist[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int ans = 0x7f7f7f7f;
bool possible;
vector<pair<int, int>> virus;
queue<pair<int, int>> q;

void init() {
    for (int i = 0; i < n; ++i)
        fill(dist[i], dist[i] + n, -1);
}

bool check() {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (board[i][j] == 0 && dist[i][j] == -1) return false;

    return true;
}

void bfs() {
    int t = 0;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (board[nx][ny] != 0 || dist[nx][ny] >= 0) continue;
            q.push({nx, ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            t = max(t, dist[nx][ny]);
        }
    }

    if (check()) {
        possible = true;
        ans = min(ans, t);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 2) {
                virus.push_back({i, j});
                board[i][j] = 0;
            }
        }
    }

    vector<int> brute(virus.size(), 1);
    fill(brute.begin(), brute.end() - m, 0);
    
    do {
        init();
        for (int i = 0; i < brute.size(); ++i) {
            if (brute[i] == 1) {
                q.push(virus[i]);
                dist[virus[i].X][virus[i].Y] = 0;
            }
        }
        bfs();
    } while (next_permutation(brute.begin(), brute.end()));

    if (possible) cout << ans;
    else cout << -1;

    return 0;
}