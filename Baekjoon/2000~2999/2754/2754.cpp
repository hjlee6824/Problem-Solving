#include <string>
#include <iostream>
#include <cstdio>

int main()
{
    std::string grade;
    std::cin >> grade;

    double score{ 0 };

    if (grade != "F")
    {
        switch (grade[0])
        {
        case 'A':
            score += 4;
            break;
        case 'B':
            score += 3;
            break;
        case 'C':
            score += 2;
            break;
        case 'D':
            score += 1;
            break;
        }

        if (grade[1] == '+')
            score += 0.3;
        else if (grade[1] == '-')
            score -= 0.3;
    }
    
    printf("%.1f\n", score);

    return 0;
}