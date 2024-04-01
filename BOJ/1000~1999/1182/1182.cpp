#include <bits/stdc++.h>
using namespace std;

int N, S;
int ans = 0;
int arr[20];

// 현재 고른 항의 개수와 고른 항들의 합
void func(int cur, int total) {
    if (cur == N) {
        if (total == S) ++ans;
        return;
    }

    func(cur + 1, total); // 현재 항을 고르지 않고 한 단계 더 들어감
    func(cur + 1, total + arr[cur]); // 현재 항을 고르고 한 단계 더 들어감
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> S;
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    
    func(0, 0);
    // 합이 0인 경우는 공집합도 포함이므로 해당 경우를 제외한다.
    if (S == 0) --ans;
    cout << ans;

    return 0;
}