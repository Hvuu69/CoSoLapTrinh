#include <iostream>
using namespace std;

int main() {
    //Biến hợp lệ
    int age = 20;          // Hợp lệ: bắt đầu bằng chữ cái
    float student_score = 8.5; // Hợp lệ: có thể dùng dấu gạch dưới
    char grade1 = 'A';     // Hợp lệ: có thể chứa số nhưng không được bắt đầu bằng số

    cout << age << ", " << student_score << ", " << grade1 << endl;

    //Biến không hợp lệ

    // int 1number = 10;
    // Sai: không được bắt đầu bằng số

    // float my-score = 9.0;
    // Sai: dấu '-' không được phép trong tên biến (chỉ dùng chữ, số, dấu gạch dưới)

    // char class = 'A';
    // Sai: "class" là từ khóa (keyword) trong C++, không thể dùng làm tên biến

    return 0;
}