#include <iostream>
#include <iomanip>

int main()
{
    double a, b;
    std::cin >> a >> b;

    std::cout << std::fixed << std::setprecision(9);
    std::cout << a / b << '\n';

    return 0;
}

/*
    문제에서 정답과 출력값의 오차가 10^-9 이하이면 정답이라 하였다.
    정답 X와 프로그램이 출력한 값 Y가 있을 때
    |Y-X| <= 10^-9이거나 |(Y-X)/X| <= 10^-9이어야 한다. (각각 절대오차, 상대오차를 뜻함)

    1. float은 소수점 이하 6자리까지, double은 소수점 이하 15자리까지의 정밀도를 갖는다.
    따라서 float형을 사용하면 안된다.

    2. double형은 기본적으로 소수점 이하 6자리까지 출력하므로 오차가 클 수 밖에 없다.
    따라서 소수점 이하 자리수가 9자리 이상이 출력되도록 지정해주어야 한다.
    여기서 주의할 점은 std::setprecision(9)은 정수부를 포함한 유효 숫자 9자리까지 반올림하여 출력하므로 (예: 4/3 = 1.33333333)
    std::fixed로 소수점 이하 9자리까지만 반올림하여 출력하도록 해야 한다.
*/