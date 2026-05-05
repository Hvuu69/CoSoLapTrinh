#include <iostream>
using namespace std;

int main() {
    float diem;
    cout << "Nhap diem (0 - 10): ";
    cin >> diem;

    if (diem < 0 || diem > 10) {
        cout << "Diem khong hop le!";
    } else if (diem >= 9) {
        cout << "Xep loai: Xuat sac";
    } else if (diem >= 8) {
        cout << "Xep loai: Gioi";
    } else if (diem >= 6.5) {
        cout << "Xep loai: Kha";
    } else if (diem >= 5) {
        cout << "Xep loai: Trung binh";
    } else {
        cout << "Xep loai: Yeu";
    }

    return 0;
}