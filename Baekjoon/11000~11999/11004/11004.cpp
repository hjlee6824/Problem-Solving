#include <bits/stdc++.h>
using namespace std;

int n, k;
int arr[5000000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n);
    
    cout << arr[k - 1];
    return 0;
}