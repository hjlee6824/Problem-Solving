#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int t, w, h;
string arr[1000];
int dist1[1000][1000];
int dist2[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;

    while (t--)
    {
        cin >> w >> h;

        queue<pair<int, int>> q1, q2;

        for (int i = 0; i < h; ++i) 
        {
            cin >> arr[i];
            fill(dist1[i], dist1[i] + w, -1);
            fill(dist2[i], dist2[i] + w, -1);
        }

        for (int i = 0; i < h; ++i)
        {
            for (int j = 0; j < w; ++j)
            {
                if (arr[i][j] == '*')
                {
                    dist1[i][j] = 0;
                    q1.push({i, j});
                }

                if (arr[i][j] == '@')
                {
                    dist2[i][j] = 0;
                    q2.push({i, j});
                }
            }
        }

        while (!q1.empty())
        {
            auto cur = q1.front(); q1.pop();

            for (int dir = 0; dir < 4; ++dir)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                if (dist1[nx][ny] >= 0 || arr[nx][ny] == '#') continue;

                dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
                q1.push({nx, ny});
            }
        }

        bool isPossible = false;

        while (!q2.empty() && !isPossible)
        {
            auto cur = q2.front(); q2.pop();

            for (int dir = 0; dir < 4; ++dir)
            {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if (nx < 0 || nx >= h || ny < 0 || ny >= w)
                {
                    isPossible = true;
                    cout << dist2[cur.X][cur.Y] + 1 << '\n';
                    break;
                }

                if (dist2[nx][ny] >= 0 || arr[nx][ny] == '#') continue;
                if (dist1[nx][ny] != -1 && dist2[cur.X][cur.Y] + 1 >= dist1[nx][ny]) continue;

                dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
                q2.push({nx, ny});
            }
        }

        if (!isPossible) cout << "IMPOSSIBLE\n";
    }

    return 0;
}