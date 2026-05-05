#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    Product p1, p2;

    cout << "Nhap thong tin san pham 1:" << endl;
    cout << "Ten: "; cin.ignore(); getline(cin, p1.name);
    cout << "Gia: "; cin >> p1.price;

    cout << "Nhap thong tin san pham 2:" << endl;
    cout << "Ten: "; cin.ignore(); getline(cin, p2.name);
    cout << "Gia: "; cin >> p2.price;

    cout << "\n--- Ket qua so sanh ---" << endl;
    if (p1.price > p2.price) {
        cout << p1.name << " co gia cao hon " << p2.name;
    } else if (p1.price < p2.price) {
        cout << p2.name << " co gia cao hon " << p1.name;
    } else {
        cout << "Hai san pham bang gia nhau.";
    }

    return 0;
}