#include <bits/stdc++.h>
using namespace std;

string str = "";

void func(int n) {
    string indent = str;

    cout << indent << "\"����Լ��� ������?\"\n";

    if (n == 0) {
        cout << indent << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    }
    else {
        cout << indent << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
        cout << indent << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
        cout << indent << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

        str += "____";
        func(n - 1);
    }

    cout << indent << "��� �亯�Ͽ���.\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    func(N);

    return 0;
}