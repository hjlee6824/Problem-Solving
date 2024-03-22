#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int title = 0;

    while (N)
    {
        title += 1;

        if (to_string(title).find("666") != string::npos)
        {
            --N;
        }
    }

    cout << title;

    return 0;
}