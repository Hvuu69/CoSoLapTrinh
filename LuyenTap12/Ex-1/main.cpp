#include <stdio.h>

int main() {
    int a, b, n;
    long tong = 0;

    printf("Nhap a, b, n (a, b < n): ");
    scanf("%d %d %d", &a, &b, &n);

    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            tong += i;
        }
    }
    printf("Tong cac so thoa man dieu kien la: %ld\n", tong);
    return 0;
}