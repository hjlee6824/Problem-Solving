#include <bits/stdc++.h>
using namespace std;

int N;
string str = "";

void func(int cnt) {
    string indent = str;

    cout << indent << "\"����Լ��� ������?\"\n";

    if (cnt == N) {
        cout << indent << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
    }
    else {
        cout << indent << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
        cout << indent << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
        cout << indent << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

        str += "____";
        func(cnt + 1);
    }

    cout << indent << "��� �亯�Ͽ���.\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    func(0);

    return 0;
}