#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n, k, l;
int dir; // 0 - 오른쪽, 1 - 아래, 2 - 왼쪽, 3 - 위
int board[100][100]; // 0은 빈 칸, 1은 뱀, 2는 사과
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
queue<pair<int, char>> q;
deque<pair<int, int>> dq;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    while (k--) {
        int a, b;
        cin >> a >> b;
        board[a - 1][b - 1] = 2;
    }

    cin >> l;
    while (l--) {
        int x;
        char c;
        cin >> x >> c;
        q.push({x, c});
    }

    int second = 0;
    dq.push_front({0, 0});
    board[0][0] = 1;

    while (true) {
        ++second;

        auto cur = dq.front();
        int nx = cur.X + dx[dir];
        int ny = cur.Y + dy[dir];

        // 만약 벽이나 자기자신의 몸과 부딪히면 게임이 끝난다.
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) break;
        if (board[nx][ny] == 1) break;

        // 만약 이동한 칸에 사과가 없다면, 몸길이를 줄여서 꼬리가 위치한 칸을 비워준다.
        if (board[nx][ny] != 2) {
            auto tail = dq.back();
            board[tail.X][tail.Y] = 0;
            dq.pop_back();
        }

        dq.push_front({nx, ny});
        board[nx][ny] = 1;
        
        if (q.empty()) continue;
        // 게임 시작 시간으로부터 X초가 끝난 뒤에 방향을 회전
        auto control = q.front();
            if (second == control.first) {
            if (control.second == 'L') dir = (dir + 3) % 4;
            else dir = (dir + 1) % 4;
            q.pop();
        }
    }

    cout << second;
    return 0;
}