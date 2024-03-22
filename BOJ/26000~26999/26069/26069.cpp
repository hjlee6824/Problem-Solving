#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string person1, person2;
    unordered_set<string> dancing;

    while (N--)
    {
        cin >> person1 >> person2;

        if (person1 == "ChongChong" || person2 == "ChongChong")
        {
            dancing.insert(person1);
            dancing.insert(person2);
            continue;
        }

        if (dancing.find(person1) != dancing.end() || dancing.find(person2) != dancing.end())
        {
            dancing.insert(person1);
            dancing.insert(person2);
        }
    }

    cout << dancing.size();

    return 0;
}