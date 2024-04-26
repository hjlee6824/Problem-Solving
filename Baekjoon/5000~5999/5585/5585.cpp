#include <bits/stdc++.h>
using namespace std;

int ans;
int input;
int arr[6] = {500, 100, 50, 10, 5, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> input;
    int money = 1000 - input;
    
    for (int i = 0; i < 6; ++i) {
        ans += money / arr[i];
        money = money % arr[i];
    }

    cout << ans;
    return 0;
}