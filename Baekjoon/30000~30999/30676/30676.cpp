#include <bits/stdc++.h>
using namespace std;

int input;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> input;

    if (input >= 380 && input < 425) cout << "Violet";
    else if (input >= 425 && input < 450) cout << "Indigo";
    else if (input >= 450 && input < 495) cout << "Blue";
    else if (input >= 495 && input < 570) cout << "Green";
    else if (input >= 570 && input < 590) cout << "Yellow";
    else if (input >= 590 && input < 620) cout << "Orange";
    else cout << "Red";
    
    return 0;
}