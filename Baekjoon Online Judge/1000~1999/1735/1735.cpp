#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans_numerator = a * d + c * b;
    int ans_denominator = b * d;

    int temp = gcd(ans_numerator, ans_denominator);

    ans_numerator /= temp;
    ans_denominator /= temp;

    cout << ans_numerator << ' ' << ans_denominator;

    return 0;
}