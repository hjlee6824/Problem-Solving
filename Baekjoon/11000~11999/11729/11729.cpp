#include <bits/stdc++.h>
using namespace std;

// 기둥 a에서 기둥 b로 n개의 원판을 이동
void hanoi(int a, int b, int n) {
    if (n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    // n번째 원판을 기둥 b로 이동하기 위해서
    // n-1번째까지의 원판을 기둥 a 또는 b가 아닌 곳으로 이동해야 함.
    hanoi(a, 6 - a - b, n - 1);
    // n번째 원판을 기둥 b로 옮긴다
    cout << a << ' ' << b << '\n';
    // 나머지 n-1번째까지의 원판을 b로 옮긴다
    hanoi(6 - a - b, b, n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    // 2 ^ K - 1: 하노이탑 이동 횟수의 일반항
    cout << (1 << N) - 1 << '\n';
    hanoi(1, 3, N);

    return 0;
}

// 하노이탑 재귀 접근 방법
// 기둥 1의 n개의 원판을 기둥 3으로 옮기려면 n번째 원판을 반드시 기둥 3로 옮겨야 함
// 그런데 n번째 원판을 옮기려면 1 ~ n-1번째 원판을 반드시 기둥 2로 옮겨야 함
// 그렇게 n번째 원판을 기둥 3으로 옮긴 후에 나머지 1 ~ n-1번째 원판을 기둥 3으로 옮긴다
// 즉 n-1번째까지의 원판을 옮길 수 있다면 n번째 원판을 반드시 옮길 수 있다.

// 이를 귀납적으로 생각하면,
// 원판이 1개일 때는 원하는 곳으로 옮길 수 있음이 자명하다.
// 그럼 k번째까지의 원판을 옮길 수 있다면, k+1번째 원판을 옮길 수 있다.
// 왜냐하면 위에서 n-1번째까지의 원판을 옮길 수 있으면 n번째 원판을 옮길 수 있기 떄문이다.