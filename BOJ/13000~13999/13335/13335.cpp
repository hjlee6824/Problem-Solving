#include <bits/stdc++.h>
using namespace std;

int n, w, L;

queue<int> q;
// 현재 다리 위에 트럭의 무게와 트럭이 움직인 거리를 저장함
deque<pair<int, int>> bridge;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> w >> L;

    for (int i = 0; i < n; ++i) {
        int truck;
        cin >> truck;
        q.push(truck);
    }

    int ans = 0;
    int total_weight = 0;
    while (true) {
        if (q.empty() && bridge.empty()) break;

        // 다리에 있는 트럭들을 1칸씩 옮긴다
        if (!bridge.empty())
            for (auto& e : bridge) ++e.second;

        // 맨 앞 트럭이 다리를 완전히 지나가는 경우
        if (!bridge.empty() && bridge.front().second > w) {
            total_weight -= bridge.front().first;
            bridge.pop_front();
        }

        // 다리에 올라갈 수 있는 경우
        if (!q.empty() && bridge.size() < w && total_weight + q.front() <= L) {
            bridge.push_back({q.front(), 1});
            total_weight += q.front();
            q.pop();
        }

        // 시간을 1만큼 진행
        ++ans;
    }

    cout << ans;
    return 0;
}