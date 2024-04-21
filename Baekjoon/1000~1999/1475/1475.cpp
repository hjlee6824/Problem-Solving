#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string N;
    cin >> N;

    vector<int> v(10);

    for (auto& ch : N) ++v[ch - '0'];

	int ans = 0;

    for (int i = 0; i < 10; ++i)
	{
		if (i == 6 || i == 9) continue;
		ans = max(ans, v[i]);
	}

	ans = max(ans, (v[6] + v[9] + 1) / 2);
	cout << ans;
        
	return 0;
}