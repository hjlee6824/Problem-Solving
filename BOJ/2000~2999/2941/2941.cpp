#include <array>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    const array<std::string, 8> alphabet{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    string word{};
    cin >> word;

    int count{ 0 };
    int currentIndex{ 0 };

    while (currentIndex < word.size())
    {
        bool found{ false };

        for (const auto& e : alphabet)
        {
            if (currentIndex + e.size() <= word.size())
            {
                if (word.substr(currentIndex, e.size()) == e)
                {
                    ++count;
                    currentIndex += e.size();
                    found = true;
                    break;
                }
            }
        }

        if (!found)
        {
            ++currentIndex;
            ++count;
        }
    }

    cout << count << '\n';

    return 0;
}