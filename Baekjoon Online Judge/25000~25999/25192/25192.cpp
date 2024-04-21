#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    set<string> emoticon_users;
    string input;
    int count = 0;

    while (N--)
    {
        cin >> input;

        if (input == "ENTER")
        {
            count += emoticon_users.size();
            emoticon_users.clear();
            continue;
        }

        emoticon_users.insert(input);
    }

    count += emoticon_users.size();

    cout << count;

    return 0;
}