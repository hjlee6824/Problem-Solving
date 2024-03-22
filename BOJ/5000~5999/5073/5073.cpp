#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    while (true)
    {
        vector<int> v(3);

        for (int i = 0; i < 3; ++i)
            cin >> v[i];

        if (v[0] == 0)
            break;

        sort(v.begin(), v.end());

        if (v[0] + v[1] > v[2])
        {
            if (v[0] == v[1] && v[1] == v[2] && v[2] == v[0])
                cout << "Equilateral\n";
            else if (v[0] == v[1] || v[1] == v[2])
                cout << "Isosceles\n";
            else
                cout << "Scalene\n";
        }
        else
            cout << "Invalid\n";
    }

    return 0;
}