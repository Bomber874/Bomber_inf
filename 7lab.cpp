#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void lab71() {
    string name;
    string author = "����";
    cout << "��� ��� �����?\n";
    cin >> name;
    cout << "������ " << name << ((name == author) ? "!" : ", � ��� ����?");
}

void lab72() {
    string in;
    cout << "������� �����(����������)\n";
    cin >> in;
    cout << "����� ����� " << in << ":" << in.length() / 2;
}

void lab73() {  // �� �������� � ����������
    string in;
    char sim;
    cout << "������� ������"; cin >> in;
    cout << "������� ������ ��� ������ � ������"; cin >> sim;
    cout << (in.find(sim) > in.length() ? "������ �� �����������" : "������ ������������");
}

void lab74() {  // �� �������� � ����������
    string first = "Test";
    string second = "es";
    cout << (first.find(second) > first.length() ? "������ �� �������� ����������" : "������ �������� ����������");

}
// ��������� �� ��������, ������� ������� ���� �� 2 (�.�. ��� �������� 2 ���������� ��������)
// ������� ��������� ��� �����, ������� ��-�� ��� �������� �����������
// upd: � ������� ��������� ����� wide char
void lab75() {
    string test;
    std::getline(cin, test);
    cout << "������ �������: " << test.find_first_of(',') / 2 << "\n������ �������: " << test.find_last_of(',') / 2;
}

void lab76() {
    string str;
    char symbol;
    int sum = 0;
    std::getline(cin, str);
    cin >> symbol;
    while (str.find(symbol) != -1) {
        sum++;
        int pos = str.find(symbol) + 1;
        str = str.substr(pos);
    }
    cout << sum;
}

void lab77() {
    string str;
    std::getline(cin, str);
    while (str.find(' ') != -1) {
        str[str.find(' ')] = ',';
    }
    cout << endl << str;
}

void lab78() {
    string str;
    int sum = 1;
    std::getline(cin, str);
    while (str.find("  ") != -1) {
        str = str.replace(str.find("  "), 2, " ");
    }
    cout << str << endl;
    while (str.find(' ') != -1) {
        str = str.substr(str.find(' ') + 1);
        sum++;
    }
    cout << endl << sum;
}

void lab79() {
    string str;
    std::getline(cin, str);
    while (str.find("  ") != -1) {
        str = str.replace(str.find("  "), 2, " ");
    }
    str[0] = toupper(str[0]);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);
    }
    cout << endl << str;
}

void lab710() {
    string str;
    int sum = 0;
    std::getline(cin, str);
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i])) {
            sum++;
        }
    cout << endl << sum;
}

void lab711() {
    string str;
    int sum = 0;
    char ch;
    std::getline(cin, str);
    for (int i = 0; i < str.length(); i++){
            ch = str[i];
            sum += atoi(&ch);
        }
    cout << endl << sum;
}
// WIP
void lab712() {
    string str;
    string out;
    std::getline(cin, str);
    do {
        cout << endl << str;
        int spacePos = str.find_first_of(' ');
        if (spacePos == -1)
            spacePos = str.length() - 1;
        if (spacePos > out.length())
            out = str.substr(0, spacePos + 1);
        str.erase(0, spacePos + 1);
    } while (str.length() > 0);
    cout << endl << out;
}

void lab713() {
    string str;
    std::getline(cin, str);
    bool cont = true;
    for (int i = 0; i < str.length(); i++) {
        if (str.find_last_of(str[i] != i) {
            cout << str[i];
            break;
        }

    }
}