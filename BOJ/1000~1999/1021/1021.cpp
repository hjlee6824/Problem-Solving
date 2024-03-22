#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	cin >> N >> M;

	deque<int> dq;
	for (int i = 1; i <= N; ++i) dq.push_back(i);

	int ans = 0;

	while (M--)
	{
		int input;
		cin >> input;

		int count = 0;

		while (!dq.empty() && dq.front() != input)
		{
			dq.push_back(dq.front());
			dq.pop_front();
			++count;
		}

		ans += ((count > dq.size() / 2) ? (dq.size() - count) : count);
		dq.pop_front();
	}

	cout << ans;

	return 0;
}