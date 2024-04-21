#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int N, M;
int ans = 0x7f7f7f7f;
int board[50][50];
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 1) house.push_back({i, j});
            if (board[i][j] == 2) chicken.push_back({i, j});
        }
    }

    vector<int> mask(chicken.size(), 1);
    for (int i = 0; i < chicken.size() - M; ++i) mask[i] = 0;

    // 하나의 집에 대해 선택한 치킨집과의 치킨 거리 중 가장 짧은 것을 택함
    do {
        int total_dist = 0;
        for (auto h : house) {
            int dist = 0x7f7f7f7f;
            for (int i = 0; i < chicken.size(); ++i) {
                if (mask[i] == 0) continue;
                dist = min(dist, abs(h.X - chicken[i].X) + abs(h.Y - chicken[i].Y));
            }
            total_dist += dist;
        }
        ans = min(ans, total_dist);
    } while (next_permutation(mask.begin(), mask.end()));
    
    cout << ans;
    return 0;
}

// 치킨집을 최대 M개 골라서 도시의 치킨 거리를 최소로 만들어야 함
// 그런데 치킨 거리가 최소가 되려면 치킨집이 최대한 많아야 하므로 M개를 고를 수 밖에 없음
// 치킨집 13곳 중 M개를 뽑는 경우의 수가 최대가 되려면 13C6(또는 13C7)
// 각 집마다 모든 치킨집에 대해 거리를 계산하기 위해 반복문을 수행하므로 100 * 13
// 시간복잡도: 100 * 13 * 13C6 = 2230800