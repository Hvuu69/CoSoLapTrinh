#include <iostream>
using namespace std;

int main() {
    int a;
    float b;
    char c;
    bool d;

    cout << "Nhap int: ";
    cin >> a;

    cout << "Nhap float: ";
    cin >> b;

    cout << "Nhap char: ";
    cin >> c;

    cout << "Nhap bool (0/1): ";
    cin >> d;

    cout << a << ", " << b << ", " << c << ", " << d;

    return 0;
}