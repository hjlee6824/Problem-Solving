#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int five = N / 5;
    int temp = N % 5;
    int three;
    bool isPossible = true;

    while (isPossible)
    {
        if (temp % 3 == 0)
        {
            three = temp / 3;
            break;
        }
        else if (five > 0)
        {
            --five;
            temp += 5;
        }
        else
        {
            isPossible = false;
        }
    }

    if (isPossible)
        cout << five + three;
    else
        cout << -1;

    return 0;
}