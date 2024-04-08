#include <bits/stdc++.h>
using namespace std;

int N, M;
int input[8][8];
int board[8][8];
int ans = 64;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
vector<pair<int, int>> cctv;

// x, y의 위치에서 dir 방향으로 감시 영역 계산
void upd(int x, int y, int dir) {
    dir %= 4;
    while (true) {
        x += dx[dir];
        y += dy[dir];
        if (x < 0 || x >= N || y < 0 || y >= M) return;
        if (board[x][y] == 6) return;
        if (board[x][y] >= 1 && board[x][y] <= 5) continue;
        board[x][y] = 7;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> input[i][j];
            if (input[i][j] >= 1 && input[i][j] <= 5)
                cctv.push_back({i, j});
        }
    }

    // cctv의 방향을 고려하여 배치한 모든 경우의 수에 대해 사각지대 계산
    // 10진수를 4진수로 바꾸고 각 자리수를 cctv의 방향으로 생각
    // 시간복잡도: 4^8 * (64 + 8 * 4 * 8 + 64) 약 2500만
    for (int case_num = 0; case_num < (1 << (2 * cctv.size())); ++case_num) {
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                board[i][j] = input[i][j];

        int tmp = case_num;
        for (int i = 0; i < cctv.size(); ++i) {
            int dir = tmp % 4;
            tmp /= 4;

            int x, y;
            tie(x, y) = cctv[i];
            
            if (board[x][y] == 1) {
                upd(x, y, dir);
            }
            else if (board[x][y] == 2) {
                upd(x, y, dir);
                upd(x, y, dir + 2);
            }
            else if (board[x][y] == 3) {
                upd(x, y, dir);
                upd(x, y, dir + 1);
            }
            else if (board[x][y] == 4) {
                upd(x, y, dir);
                upd(x, y, dir + 1);
                upd(x, y, dir + 2);
            }
            else {
                upd(x, y, dir);
                upd(x, y, dir + 1);
                upd(x, y, dir + 2);
                upd(x, y, dir + 3);
            }
        }

        int cnt = 0;
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                if (board[i][j] == 0) ++cnt;

        ans = min(ans, cnt);
    }

    cout << ans;
    return 0;    
}