#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>

bool compare(std::string_view a, std::string_view b)
{
    if (a.length() == b.length())
        return a < b;

    return a.length() < b.length();
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int N;
    std::cin >> N;

    std::vector<std::string> words(N);
    for (int i{ 0 }; i < N; ++i)
        std::cin >> words[i];

    std::sort(words.begin(), words.end(), compare);
    words.erase(std::unique(words.begin(), words.end()), words.end());

    for (auto& word : words)
        std::cout << word << '\n';

    return 0;
}