#include <bits/stdc++.h>
using namespace std;

string str;
stack<char> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> str;

    int ans = 0, current = 1;
    bool isValid = true;

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '(')
        {
            s.push('(');
            current *= 2; // (X)의 괄호값은 2*값(X)인데 (X)를 모르기 때문에 일단 2만 곱해둠
        }
        else if (str[i] == '[')
        {
            s.push('[');
            current *= 3; // [X]의 괄호값은 3*값(X)인데 값(X)를 모르기 때문에 일단 3만 곱해둠
        }
        else if (str[i] == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                isValid = false;
                break;
            }

            if (str[i - 1] == '(') ans += current; // 가장 작은 괄호열 ()인 경우 괄호열의 값을 알 수 있으므로 더해준다.
            s.pop();
            current /= 2; // 닫는 괄호가 나온다는 것은 해당 부분 괄호열이 끝난 것이므로 누적 곱을 되돌린다
        }
        else
        {
            if (s.empty() || s.top() != '[')
            {
                isValid = false;
                break;
            }

            if (str[i - 1] == '[') ans += current; // 가장 작은 괄호열 []인 경우 괄호열의 값을 알 수 있으므로 더해준다.
            s.pop();
            current /= 3; // 닫는 괄호가 나온다는 것은 해당 부분 괄호열이 끝난 것이므로 누적 곱을 되돌린다
        }
    }

    if (!s.empty()) isValid = false;

    if (isValid) cout << ans;
    else cout << 0;

    return 0;
}

// 풀이 아이디어: 괄호열이 올바른지 판단하기 위해 스택에 괄호를 저장함과 동시에
//               현재까지의 괄호열의 값도 계산하기 위해 곱을 저장할 변수 필요