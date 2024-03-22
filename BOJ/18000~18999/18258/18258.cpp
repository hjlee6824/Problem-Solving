#include <iostream>
#include <string>
using namespace std;

int queue[2000000];
int frontIndex = 0;
int backIndex = 0;

void push(int X)
{
    queue[backIndex++] = X;
}

bool empty()
{
    return frontIndex == backIndex ? true : false;
}

int pop()
{
    return empty() ? -1 : queue[frontIndex++];
}

int size()
{
    return backIndex - frontIndex;
}

int front()
{
    return empty() ? -1 : queue[frontIndex];
}

int back()
{
    return empty() ? -1 : queue[backIndex - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--)
    {
        string command{};
        cin >> command;

        if (command == "push")
        {
            int X;
            cin >> X;
            push(X);
        }
        else if (command == "pop")
        {
            cout << pop() << '\n';
        }
        else if (command == "size")
        {
            cout << size() << '\n';
        }
        else if (command == "empty")
        {
            cout << empty() << '\n';
        }
        else if (command == "front")
        {
            cout << front() << '\n';
        }
        else
        {
            cout << back() << '\n';
        }
    }

    return 0;
}