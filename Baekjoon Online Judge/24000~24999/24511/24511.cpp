#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> queuestack(N);

    for (int i = 0; i < N; ++i)
        cin >> queuestack[i];

    deque<int> dq;

    for (int i = 0; i < N; ++i)
    {
        int B;
        cin >> B;

        if (queuestack[i] == 0)
            dq.push_back(B);
    }

    int M;
    cin >> M;

    while (M--)
    {
        int C;
        cin >> C;

        dq.push_front(C);
        cout << dq.back() << ' ';
        dq.pop_back();
    }

    return 0;
}