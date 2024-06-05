#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    if (n % 2 == 0) cout << "CY";
    else cout << "SK";

    return 0;
}

// 홀수 + 홀수 = 짝수이고, 짝수 + 홀수 = 홀수이므로
// n을 1과 3의 합으로 나타냈을 때 n이 짝수면 항의 개수도 짝수이고
// n이 홀수면 항의 개수도 홀수이기 때문에
// n이 짝수면 CY, 홀수면 SK를 출력