#include <bits/stdc++.h>
using namespace std;

int N, M, K;
int R, C;
int notebook[40][40];
int sticker[10][10];

// x, y의 위치에서 스티커를 붙일 수 있는지 검사
bool check(int x, int y) {
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (sticker[i][j] == 1 && notebook[x + i][y + j] == 1)
                return false;
        }
    }
    return true;
}

// 스티커를 붙임
void attach(int x, int y) {
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (sticker[i][j] == 1)
                notebook[x + i][y + j] = 1;
        }
    }
}

// 스티커를 시계 방향으로 90도 회전
// 회전하면 가로 세로의 길이가 서로 바뀌어야 함
void rotate() {
    int tmp[10][10];

    for (int i = 0; i < C; ++i)
        for (int j = 0; j < R; ++j)
            tmp[i][j] = sticker[R - j - 1][i];

    for (int i = 0; i < C; ++i)
        for (int j = 0; j < R; ++j)
            sticker[i][j] = tmp[i][j];

    swap(R, C);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;

    while (K--) {
        cin >> R >> C;

        for (int i = 0; i < R; ++i)
            for (int j = 0; j < C; ++j)
                cin >> sticker[i][j];

        // 붙일 공간을 모두 확인한 후에도 없다면 회전을 진행해야 하므로
        // 회전을 위한 for문이 맨 바깥쪽에 있어야 함
        bool attached = false;
        for (int rot = 0; rot < 4; ++rot) {
            for (int i = 0; i <= N - R; ++i) {
                if (attached) break;
                for (int j = 0; j <= M - C; ++j) {
                    if (check(i, j)) {
                        attach(i, j);
                        attached = true;
                        break;
                    }
                }
            }
            if (attached) break;
            rotate();
        }
    }
    
    int ans = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (notebook[i][j] == 1) ++ans;

    cout << ans;
    return 0;
}

// 하나의 스티커에 대해 겹치는 부분이 있는지 검사하는 데 필요한 연산 횟수 = 100
// 붙일 수 없으면 회전하는 경우의 수 4가지
// 이러한 스티커의 최대 개수 100개
// 이를 노트북의 좌측 상단부터 우측 하단까지 붙일 수 있는지 살펴봐야 하므로 40 * 40 = 1600
// 시간복잡도: 1600 * (100 * 100 * 4) 대략 6400만