#include <iostream>
using namespace std;

constexpr int max_size = 1000000;
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
        int command, X;
        cin >> command;

        switch (command)
        {
        case 1:
            cin >> X;
            push_front(X);
            break;
        case 2:
            cin >> X;
            push_back(X);
            break;
        case 3:
            cout << pop_front() << '\n';
            break;
        case 4:
            cout << pop_back() << '\n';
            break;
        case 5:
            cout << size() << '\n';
            break;
        case 6:
            cout << empty() << '\n';
            break;
        case 7:
            cout << front() << '\n';
            break;
        case 8:
            cout << back() << '\n';
            break;
        }
    }

    return 0;
}