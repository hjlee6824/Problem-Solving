#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, M;
int arr[300][300];
bool visited[300][300];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
queue<pair<int, int>> q;

void melt() {
    // 빙산이 있는 위치에 상하좌우에 바다가 몇 칸 존재하는지 저장
    int water[300][300] = {0};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] == 0) continue;

            for (int dir = 0; dir < 4; ++dir) {
                int nx = i + dx[dir];
                int ny = j + dy[dir];

                if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                if (arr[nx][ny] == 0) ++water[i][j];
            }
        }
    }

    // 해당 빙산 위치의 인접한 바다 수 만큼 감소
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            arr[i][j] = max(0, arr[i][j] - water[i][j]);
}

void bfs(int x, int y) {
    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty()) {
        auto cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (arr[nx][ny] == 0 || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }   
}

void init_visited() {
    for (int i = 0; i < N; ++i)
        fill(visited[i], visited[i] + M, false);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> arr[i][j];

    int year = 0;
    bool is_separated = false;
    bool is_melted = false;

    while (!is_separated && !is_melted) {
        melt(); ++year;
        init_visited();

        int glacier = 0;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (arr[i][j] > 0 && !visited[i][j]) {
                    bfs(i, j);
                    ++glacier;
                }
            }
        }
        
        // 빙산의 수가 2개 이상이면 분리된 것, 0개면 전부 다 녹은 것
        if (glacier > 1) {
            is_separated = true;
        } else if (glacier == 0) {
            is_melted = true;
        }
    }

    if (is_separated) cout << year;
    else cout << 0;

    return 0;
}