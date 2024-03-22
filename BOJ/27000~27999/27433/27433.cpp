#include <iostream>

long long factorial(int n)
{
    if (n < 1)
        return 1;
    
    return n * factorial(n - 1);
}

int main()
{
    int N;
    std::cin >> N;

    std::cout << factorial(N);

    return 0;
}