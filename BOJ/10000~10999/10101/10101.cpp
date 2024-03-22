#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c == 180)
    {
        if (a == b && a == c)
            cout << "Equilateral\n";
        else if (a == b || a == c || b == c)
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }
    else
    {
        cout << "Error\n";
    }

    return 0;
}