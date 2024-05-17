#include <bits/stdc++.h>
using namespace std;

int n;
int s[301];
int d[301];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        sum += s[i];
    }

    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];

    for (int i = 4; i <= n; ++i)
        d[i] = min(d[i - 2], d[i - 3]) + s[i];
    
    // 구한 값은 최솟값이므로 모든 계단의 점수 합에서 빼야 함
    // 마지막 계단은 밟아야 하므로 밟지 않은 계단은 n-1번째와 n-2번째 중 더 작은 값
    cout << sum - min(d[n - 1], d[n - 2]);
    return 0;
}

// n번째 계단까지 밟았을 때 점수의 합의 최댓값을 다르게 생각하면
// 밟지 않을 계단의 점수의 합의 최솟값을 구하는 것과 같다

// d[i]: i번째 계단까지 올라섰을 때 밟지 않을 계단의 합의 최솟값
// 단 i번째 계단은 반드시 밟지 않을 계단으로 선택해야 함

// k번째 계단을 밟지 않으면 k-1번째 계단은 반드시 밟아야 함
// k-2번째과 k-3번째 계단 중 하나를 밟아야 함
// d[k] = min(d[k-2], d[k-3]) + s[k]