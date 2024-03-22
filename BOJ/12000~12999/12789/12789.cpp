#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;

    for (int i = 0; i < N; ++i)
    {
        int student;
        cin >> student;
        q.push(student);
    }

    int nextStudent = 1;
    stack<int> s{};

    while (!q.empty())
    {
        if (q.front() == nextStudent)
        {
            q.pop();
            ++nextStudent;
        }
        else
        {
            s.push(q.front());
            q.pop();
        }

        while (!s.empty() && s.top() == nextStudent)
        {
            s.pop();
            ++nextStudent;
        }
    }

    if (s.empty())
        cout << "Nice\n";
    else
        cout << "Sad\n";

    return 0;
}