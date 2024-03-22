#include <iostream>
#include <string>

int main()
{
    std::string patient;
    std::cin >> patient;

    std::string doctor;
    std::cin >> doctor;

    if (patient.length() >= doctor.length())
        std::cout << "go";
    else
        std::cout << "no";

    return 0;
}