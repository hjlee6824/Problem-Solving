#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    while (true)
    {
        cin >> n;

        if (n == -1)
            break;
    
        int sum = 0;
        vector<int> divisors{};

        for (int i = 1; i < n; ++i)
        {
            if (n % i == 0)
            {
                sum += i;
                divisors.push_back(i);
            }
        }

        if (n == sum)
        {
            cout << n << " = ";
            for (int i = 0; i < divisors.size(); ++i)
            {
                cout << divisors[i];

                if (i + 1 != divisors.size())
                    cout << " + ";
            }
        }
        else
        {
            cout << n << " is NOT perfect.";
        }

        cout << '\n';
    }

    return 0;
}