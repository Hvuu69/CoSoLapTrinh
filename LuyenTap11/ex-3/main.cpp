#include <iostream>
using namespace std;

int main() {
    int n, tong = 0;
    cout << "Nhap N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        tong += (2 * i - 1);
    }

    cout << "Tong cua " << n << " so le dau tien la: " << tong;
    return 0;
}