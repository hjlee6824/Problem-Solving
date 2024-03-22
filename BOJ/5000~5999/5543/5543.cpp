#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> burger(3);
    cin >> burger[0] >> burger[1] >> burger[2];

    vector<int> drink(2);
    cin >> drink[0] >> drink[1];

    cout << *min_element(burger.begin(), burger.end()) + *min_element(drink.begin(), drink.end()) - 50;
    
    return 0;
}