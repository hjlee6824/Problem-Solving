#include <bits/stdc++.h>
using namespace std;

double w, h;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> w >> h;

    double bmi = w / (h * h);

    if (bmi < 18.5) cout << "Underweight";
    else if (bmi > 25) cout << "Overweight";
    else cout << "Normal weight";

    return 0;
}