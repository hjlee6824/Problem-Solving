#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> cards(N);
    
    for (auto& card : cards)
        cin >> card;

    int max = 0;

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                int sum = cards[i] + cards[j] + cards[k];
                if (sum <= M && sum > max)
                    max = sum;
            }
        }
    }

    cout << max << '\n';

    return 0;
}