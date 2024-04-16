#include <bits/stdc++.h>
using namespace std;

int K;
int ans;
string gear[4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 4; ++i)
        cin >> gear[i];
    
    cin >> K;

    while (K--) {
        int x, dir;
        cin >> x >> dir;
        --x; // 인덱스로 사용하기 위해 처리
        
        // 각 기어의 회전 방향을 저장
        int rotate_dir[4] = {};
        rotate_dir[x] = dir;

        // 왼쪽의 기어들을 회전
        int idx = x;
        while (idx > 0 && gear[idx - 1][2] != gear[idx][6]) {
            rotate_dir[idx - 1] = -rotate_dir[idx];
            --idx;
        }

        // 오른쪽의 기어들을 회전
        idx = x;
        while (idx < 3 && gear[idx][2] != gear[idx + 1][6]) {
            rotate_dir[idx + 1] = -rotate_dir[idx];
            ++idx;
        }

        // STL rotate() 이용
        for (int i = 0; i < 4; ++i) {
            if (rotate_dir[i] == 1)
                rotate(gear[i].begin(), gear[i].end() - 1, gear[i].end());
            else if (rotate_dir[i] == -1)
                rotate(gear[i].begin(), gear[i].begin() + 1, gear[i].end());
        }
    }

    // 톱니바퀴의 12시 방향이 S극이면 2^(톱니바퀴 번호 - 1)을 더한다.
    for (int i = 0; i < 4; ++i)
        if (gear[i][0] == '1') ans += (1 << i);

    cout << ans;
    return 0;
}