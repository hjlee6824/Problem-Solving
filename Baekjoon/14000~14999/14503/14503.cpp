#include <bits/stdc++.h>
using namespace std;

int N, M;
int r, c, d;
int board[50][50];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

// 상하좌우에 청소되지 않은 빈 칸이 존재하는지 검사
bool check() {
    for (int dir = 0; dir < 4; ++dir) {
        int nx = r + dx[dir];
        int ny = c + dy[dir];
        if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
        if (board[nx][ny] == 0) return true;
    }
    
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M >> r >> c >> d;
    
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> board[i][j];
    
    int ans = 0;
    while (true) {
        // 현재 칸이 아직 청소되지 않았으면 청소
        if (board[r][c] == 0) {
            board[r][c] = 2;
            ++ans;
        }
        
        if (check()) {
            d = ((d == 0) ? 3 : d - 1); // 현재 방향의 반시계 90도 회전
            if (board[r + dx[d]][c + dy[d]] == 0) { // 앞 칸이 청소되지 않은 빈 칸이면 전진
                r += dx[d];
                c += dy[d];
            }
        }
        else {
            int backward_dir = (d + 2) % 4; // 후진하는 방향
            if (board[r + dx[backward_dir]][c + dy[backward_dir]] == 1) break; // 후진 가능하면 후진, 그렇지 않으면 작동 멈추기
            r += dx[backward_dir];
            c += dy[backward_dir];
        }
    }
    
    cout << ans;
    return 0;
}