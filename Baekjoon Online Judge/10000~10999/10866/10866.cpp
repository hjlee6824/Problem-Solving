#include <iostream>
#include <string>
using namespace std;

constexpr int max_size = 10000;
int deque[2 * max_size];
int frontIndex = max_size;
int backIndex = max_size;

void push_front(int X)
{
    deque[--frontIndex] = X;
}

void push_back(int X)
{
    deque[backIndex++] = X;
}

bool empty()
{
    return frontIndex == backIndex ? true : false;
}

int pop_front()
{
    return empty() ? -1 : deque[frontIndex++];
}

int pop_back()
{
    return empty() ? -1 : deque[--backIndex];
}

int size()
{
    return backIndex - frontIndex;
}

int front()
{
    return empty() ? -1 : deque[frontIndex];
}

int back()
{
    return empty() ? -1 : deque[backIndex - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--)
    {
        string command;
        cin >> command;

        if (command == "push_front")
        {
            int X;
            cin >> X;
            push_front(X);
        }
        else if (command == "push_back")
        {
            int X;
            cin >> X;
            push_back(X);
        }
        else if (command == "pop_front")
        {
            cout << pop_front() << '\n';
        }
        else if (command == "pop_back")
        {
            cout << pop_back() << '\n';
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