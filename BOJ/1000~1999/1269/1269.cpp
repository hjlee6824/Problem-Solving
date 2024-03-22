#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;

    unordered_set<int> a, b;
    int input;

    for (int i = 0; i < A; ++i)
    {
        cin >> input;
        a.insert(input);
    }

    for (int i = 0; i < B; ++i)
    {
        cin >> input;
        b.insert(input);
    }

    int count_a = a.size(), count_b = b.size();

    for (const auto& e : b)
    {
        if (a.find(e) != a.end())
        {
            --count_a;
        }
    }

    for (const auto& e : a)
    {
        if (b.find(e) != b.end())
        {
            --count_b;
        }
    }

    cout << count_a + count_b;

    return 0;
}