#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int ans = 0;
char board[5][5];
int mask[25];
vector<pair<int, int>> coordinates;

int arr[5][5];
bool visited[5][5];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
            if (arr[nx][ny] == 0 || visited[nx][ny]) continue;
            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }
}

bool check1(vector<pair<int, int>>& v) { // S의 개수 검사
    int S = 0;
    for (auto cur : v)
        if (board[cur.X][cur.Y] == 'S') ++S;

    return (S >= 4 ? true : false);
}

bool check2(vector<pair<int, int>>& v) { // 전부 인접한지 검사 (BFS)
    int cnt = 0; // BFS 횟수

    for (int i = 0; i < 5; ++i) {
        fill(arr[i], arr[i] + 5, 0);
        fill(visited[i], visited[i] + 5, false);
    }

    for (auto e : v) arr[e.X][e.Y] = 1;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr[i][j] == 1 && !visited[i][j]) {
                ++cnt;
                bfs(i, j);
            }
        }
    }

    return (cnt == 1 ? true : false);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> board[i][j];
            coordinates.push_back({i, j});
        }
    }

    for (int i = 7; i < 25; ++i) mask[i] = 1; // 7개의 0과 나머지가 1로 된 수열

    do {
        vector<pair<int, int>> tmp;
        for (int i = 0; i < 25; ++i)
            if (mask[i] == 0) tmp.push_back(coordinates[i]);

        if (check1(tmp) && check2(tmp)) ++ans;
    } while (next_permutation(mask, mask + 25)); // 25C7 = 480700

    cout << ans;
    return 0;
}

