#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int count{ 0 };
    while (N--)
    {
        string word{};
        cin >> word;

        vector<int> alphabet(26);
        bool isGroupWord{ true };

        alphabet[word[0] - 'a'] = 1;

        for (int i{ 1 }; i < word.size(); ++i)
        {
            int index = word[i] - 'a';
            if (alphabet[index])
            {
                if (!(word[i - 1] == word[i]))
                    isGroupWord = false;
            }
            
            alphabet[index] = 1;   
        }

        if (isGroupWord)
            ++count;
    }

    cout << count << '\n';

    return 0;
}