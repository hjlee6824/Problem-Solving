#include <iostream>
#include <array>
#include <string>
#include <iomanip>
#include <algorithm>

int main()
{
    std::array<std::string, 9> gradeList{ "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "F" };
    std::array<double, 9> scoreList{ 4.5, 4.0, 3.5, 3.0, 2.5, 2.0, 1.5, 1.0, 0.0 };

    std::string subject, grade;

    double score;
    double sumOfScore = 0.0, sumOfScoreBySubject = 0.0;

    for (int i = 0; i < 20; ++i)
    {
        std::cin >> subject >> score >> grade;

        if (grade == "P")
            continue;

        int indexOfScoreList = std::find(gradeList.begin(), gradeList.end(), grade) - gradeList.begin();

        sumOfScoreBySubject += scoreList[indexOfScoreList] * score;
        sumOfScore += score;
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << sumOfScoreBySubject / sumOfScore;

    return 0;
}