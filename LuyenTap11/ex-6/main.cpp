#include <iostream>
using namespace std;

long long tinhTongDeQuy(int n) {
    if (n == 1) return 1;
    return (long long)n * n + tinhTongDeQuy(n - 1);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap n > 0";
    } else {
        cout << "Tong S (dung de quy) la: " << tinhTongDeQuy(n);
    }

    return 0;
}