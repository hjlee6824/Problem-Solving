#include <bits/stdc++.h>
using namespace std;

int N;
int ans;
int input[20][20];
int board[20][20];

// 시계방향으로 0도 회전 = 왼쪽으로 민 것
// 시계방향으로 90도 회전 = 아래로 민것
// 시계방향으로 180도 회전 = 오른쪽으로 민 것
// 시계방향으로 270도 회전 = 위로 민 것
void rotate() {
    int tmp[20][20];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            tmp[i][j] = board[N - j - 1][i];

    for (int i = 0; i < N; ++i) 
        for (int j = 0; j < N; ++j)
            board[i][j] = tmp[i][j];
}

// 블록을 미는 함수를 각 방향마다 따로 구현하는 것 보다
// 보드를 회전시켜서 한 방향으로만 밀도록 구현하는 것이 더 간단함
void move_block(int dir) {
    int undo = 4 - dir;
    while (dir--) rotate();

    for (int i = 0; i < N; ++i) {
        queue<int> q;
        int tmp[20] = {};
        bool merged[20] = {};

        for (int j = 0; j < N; ++j) {
            if (board[i][j] != 0) q.push(board[i][j]);
        }

        int idx = -1; // 마지막 블럭이 놓인 위치
        while (!q.empty()) {
            // 아직 블럭을 놓지 않았다면
            if (idx == -1) {
                tmp[++idx] = q.front();
                q.pop();
                continue;
            }
            
            // 아직 합쳐지지 않았고 두 블럭이 같으면 합친다
            if (!merged[idx] && tmp[idx] == q.front()) {
                tmp[idx] *= 2;
                merged[idx] = true;
                q.pop();
                continue;
            }
            
            // 이미 합쳐진 블럭이거나 두 블럭이 다르면 다음 자리에 놓는다
            tmp[++idx] = q.front();
            q.pop();
        }

        for (int j = 0; j < N; ++j)
            board[i][j] = tmp[j];
    }

    // 나는 원래 방향으로 되돌리기 위해 추가적인 회전을 했는데
    // 찾아보니 모든 경우에 대해 다 해보기 때문에 모든 방향을 확인함이 보장되므로 추가적인 회전이 필요없다고 함
    while (undo--) rotate();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> input[i][j];

    // 최대 5번 이동하는 모든 경우의 수 = 4^5
    // 4진수로 생각하여 각 자리수를 미는 방향으로 생각
    for (int case_num = 0; case_num < 1024; ++case_num) { //  
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                board[i][j] = input[i][j];

        int tmp = case_num;
        for (int move_cnt = 0; move_cnt < 5; ++move_cnt) {
            int dir = tmp % 4;
            tmp /= 4;
            move_block(dir);
        }

        // 가장 큰 블록의 값 찾기
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                ans = max(ans, board[i][j]);
    }

    cout << ans;
    return 0;
}

// 블록을 밀 때 보드 전체에 대해서 수행하므로 20 * 20 = 400
// 최대 5번 밀 수 있음
// 밀 수 있는 방향은 상하좌우 4가지
// 경우의 수는 4^5 = 1024
// 시간복잡도: 400 * 5 * 1024 = 2048000