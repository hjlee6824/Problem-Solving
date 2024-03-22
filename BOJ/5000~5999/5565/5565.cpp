#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int total_price;
    cin >> total_price;

    int sum = 0;
    
    for (int i = 0; i < 9; ++i) {
        int input;
        cin >> input;
        sum += input;
    }

    cout << total_price - sum;

    return 0;
}