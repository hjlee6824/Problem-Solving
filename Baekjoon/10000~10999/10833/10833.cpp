#include <bits/stdc++.h>
using namespace std;

int n;
int student[100];
int apple[100];
int ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> student[i] >> apple[i];
        ans += (apple[i] % student[i]);
    }

    cout << ans;
    return 0;
}