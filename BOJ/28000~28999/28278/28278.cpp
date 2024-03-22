#include <iostream>
using namespace std;

int stack[1000000];
int topIndex = 0;

void push(int X)
{
    stack[topIndex++] = X;
}

bool empty()
{
    return topIndex == 0 ? true : false;
}

int pop()
{
    return empty() ? -1 : stack[--topIndex];
}

int size()
{
    return topIndex;
}

int top()
{
    return empty() ? -1 : stack[topIndex - 1];
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
            push(X);
            break;
        case 2:
            cout << pop() << '\n';
            break;
        case 3:
            cout << size() << '\n';
            break;
        case 4:
            cout << empty() << '\n';
            break;
        case 5:
            cout << top() << '\n';
            break;
        }
    }

    return 0;
}