#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        if (str == "Algorithm") cout << "204\n";
        else if (str == "DataAnalysis") cout << "207\n";
        else if (str == "ArtificialIntelligence") cout << "302\n";
        else if (str == "CyberSecurity") cout << "B101\n";
        else if (str == "Network") cout << "303\n";
        else if (str == "Startup") cout << "501\n";
        else cout << "105\n";
    }

    return 0;
}