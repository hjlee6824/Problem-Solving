#include <bits/stdc++.h>
using namespace std;

int N, M, K;
int A[100][100];
int B[100][100];
int C[100][100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    cin >> M >> K;

    for (int i = 0; i < M; ++i)
        for (int j = 0; j < K; ++j)
            cin >> B[i][j];

    for (int row_A = 0; row_A < N; ++row_A) {
        for (int col_B = 0; col_B < K; ++col_B) {
            int sum = 0;
            for (int i = 0; i < M; ++i)
                sum += A[row_A][i] * B[i][col_B];
            C[row_A][col_B] = sum;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j)
            cout << C[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}