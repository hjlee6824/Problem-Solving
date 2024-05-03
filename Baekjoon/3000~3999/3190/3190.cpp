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
deque<pair<int, int>> snake;

void rotate_dir(char ch) {
    if (ch == 'L') dir = ((dir == 0) ? 3 : (dir - 1));
    else dir = (dir + 1) % 4;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    while (k--) {
        int i, j;
        cin >> i >> j;
        board[i - 1][j - 1] = 2;
    }

    cin >> l;
    while (l--) {
        int x;
        char c;
        cin >> x >> c;
        q.push({x, c});
    }

    int game_time = 0;
    snake.push_front({0, 0});
    board[0][0] = 1;

    while (true) {
        ++game_time;
        auto head = snake.front();
        auto tail = snake.back();

        snake.push_front({head.X + dx[dir], head.Y + dy[dir]});
        head = snake.front();

        // 만약 벽이나 자기자신의 몸과 부딪히면 게임이 끝난다.
        if (head.X < 0 || head.X >= n || head.Y < 0 || head.Y >= n) break;
        if (board[head.X][head.Y] == 1) break;

        // 만약 이동한 칸에 사과가 없다면, 몸길이를 줄여서 꼬리가 위치한 칸을 비워준다. 즉, 몸길이는 변하지 않는다.
        if (board[head.X][head.Y] == 0) {
            board[tail.X][tail.Y] = 0;
            snake.pop_back();
        }

        board[head.X][head.Y] = 1;

        // 게임 시작 시간으로부터 X초가 끝난 뒤에 방향을 회전
        if (!q.empty() && (game_time == q.front().first)) {
            rotate_dir(q.front().second);
            q.pop();
        }
    }

    cout << game_time;
    return 0;
}