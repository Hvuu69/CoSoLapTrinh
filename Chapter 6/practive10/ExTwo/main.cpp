#include <cstdio>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    int b[5];

    // Ghi mảng
    FILE *f = fopen("array.bin", "wb");
    fwrite(a, sizeof(int), n, f);
    fclose(f);

    // Đọc mảng
    f = fopen("array.bin", "rb");
    fread(b, sizeof(int), n, f);
    fclose(f);

    // Kiểm tra
    printf("Mang doc ra: ");
    bool match = true;
    for (int i = 0; i < n; i++) {
        printf("%d ", b[i]);
        if (a[i] != b[i]) match = false;
    }
    printf("\nKet qua: %s\n", match ? "Chinh xac!" : "Sai lech!");

    return 0;
}