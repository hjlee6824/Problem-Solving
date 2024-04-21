#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N;
string arr[25];
bool visited[25][25];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

int bfs(int x, int y)
{
    int area = 0;

    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        auto cur = q.front(); q.pop();
        ++area;

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            if (arr[nx][ny] == '0' || visited[nx][ny]) continue;

            visited[nx][ny] = true;
            q.push({nx, ny});
        }
    }

    return area;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for (int i = 0; i < N; ++i) cin >> arr[i];

    vector<int> ans;

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (arr[i][j] == '1' && !visited[i][j])
            {
                ans.push_back(bfs(i, j));
            }
        }
    }

    cout << ans.size() << '\n';
    sort(ans.begin(), ans.end());
    for (auto e : ans) cout << e << '\n';

    return 0;
}