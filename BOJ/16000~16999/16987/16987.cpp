#include <bits/stdc++.h>
using namespace std;

int N;
int S[8];
int W[8];
int cnt;
int ans;

// 현재 cur 번째의 달걀을 들고 있고 이때까지 cnt 만큼의 달걀을 깸
void solve(int cur) {
    // 최근에 든 달걀이 가장 오른쪽에 위치한 달걀
    if (cur == N) {
        ans = max(ans, cnt);
        return;
    }

    // 손에 들고 있는 달걀이 깨졌다면 깨는 과정 없이 바로 다음 단계
    // 손에 들고 있는 달걀 빼고 전부 다 깨진 경우도 깨는 과정 없이 바로 다음 단계
    if (S[cur] <= 0 || cnt == N - 1) {
        solve(cur + 1);
        return;
    }

    // 깰 달걀을 찾는 과정
    for (int i = 0; i < N; ++i) {
        // 손에 들고 있는 달걀 또는 이미 깨진 달걀은 깰 수 없는 달걀임
        if (cur == i || S[i] <= 0) continue;
        
        // 달걀을 깬다
        S[cur] -= W[i];
        S[i] -= W[cur];
        if (S[cur] <= 0) ++cnt;
        if (S[i] <= 0) ++cnt;

        // 다음 달걀을 들고 한 단계 더 들어감
        solve(cur + 1);

        // 이전 상태로 되돌린다
        if (S[cur] <= 0) --cnt;
        if (S[i] <= 0) --cnt;
        S[cur] += W[i];
        S[i] += W[cur];
    }
        
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; ++i)
        cin >> S[i] >> W[i];

    solve(0);
    cout << ans;

    return 0;
}