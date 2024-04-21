#include <iostream>
#include <string>
#include <string_view>

int g_fcnCall{ 0 };

int recursion(std::string_view S, int begin, int end)
{
    ++g_fcnCall;

    if (begin >= end) return 1;
    else if (S[begin] != S[end]) return 0;
    else return recursion(S, begin + 1, end - 1);
}

int isPalindrome(std::string_view S)
{
    return recursion(S, 0, S.length() - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    
    int T;
    std::cin >> T;

    std::string S;

    while (T--)
    {
        g_fcnCall = 0;
        std::cin >> S;
        std::cout << isPalindrome(S) << ' ' << g_fcnCall << '\n';
    }

    return 0;
}