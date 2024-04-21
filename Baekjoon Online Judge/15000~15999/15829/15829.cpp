#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
    cin >> L;

    string str;
    cin >> str;

    long long sum = 0;
    
    for (int i = 0; i < L; ++i)
    {
        int temp = str[i] - 'a' + 1;
        long long power = 1;

        for (int j = 0; j < i; ++j)
        {
            power = (power * 31) % 1234567891;
        }

        sum += (temp * power) % 1234567891;
    }

    cout << sum % 1234567891;

    return 0;
}