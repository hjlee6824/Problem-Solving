#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    while (true)
    {
        getline(cin, str);

        if (str == "#") break;

        int count = 0;

        for (auto ch : str)
        {
            char lowercase = tolower(ch);
            if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u')
                ++count;
        }

        cout << count << '\n';
    }

    return 0;
}