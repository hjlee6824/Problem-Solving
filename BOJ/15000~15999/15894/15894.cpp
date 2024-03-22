#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long squareNum = n * (n + 1) / 2;
    long long duplicatedLineNum = n * (n - 1) / 2;

    cout << (4 * squareNum) - (2 * duplicatedLineNum * 2) << '\n';

    return 0;
}