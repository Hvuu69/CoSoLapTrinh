#include <iostream>
using namespace std;

int main() {
    int n;
    long long s = 0;
    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        s += (long long)i * i;
    }

    cout << "Tong S = 1^2 + 2^2 + ... + " << n << "^2 la: " << s;
    return 0;
}