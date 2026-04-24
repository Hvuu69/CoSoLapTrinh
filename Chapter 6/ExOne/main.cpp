#include <cstdio>

int main() {
    // 1. Tạo file trong cùng thư mục với file code
    FILE *f1 = fopen("test_local.txt", "w");
    FILE *f2 ;
    if (f1 != NULL) {
        printf("Da tao file test_local.txt thanh cong.\n");
        fclose(f1);
    }

    // Đường dẫn sử dụng dấu gạch chéo kép \\
    FILE *f2 = fopen("C:\\test_drive_c.txt", "w");
        printf("Da tao file trong o C thanh cong.\n");

    return 0;
}