#include <bits/stdc++.h>
using namespace std;

int N, K;
int dist[100001];
queue<int> q;

// 현재 위치 X에 대해 2 * X의 좌표들을 전부 큐에 넣기
void teleport(int cur) {
    int x = cur;
    // 위치가 0이면 2를 곱해도 0이므로 무한루프에 빠짐
    if (x == 0) return;
    
    while (true) {
        x *= 2;
        if (x > 100000) break;

        if (dist[x] == -1) {
            dist[x] = dist[cur];
            q.push(x);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;

    fill(dist, dist + 100001, -1);

    dist[N] = 0;
    q.push(N);

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        teleport(cur);

        for (int dir : {cur - 1, cur + 1}) {
            if (dir < 0 || dir > 100000) continue;
            if (dist[dir] >= 0) continue;
            // 좌우로 1초 이동
            dist[dir] = dist[cur] + 1;
            q.push(dir);
        }
    }

    cout << dist[K];

    return 0;
}