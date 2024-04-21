#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    int cute = 0, not_cute = 0;
    for (int i = 0; i < N; ++i) {
        int input;
        cin >> input;
        if (input == 0) ++not_cute;
        else ++cute;
    }

    cout << "Junhee is " << (not_cute > cute ? "not cute!" : "cute!");
    
    return 0;
}