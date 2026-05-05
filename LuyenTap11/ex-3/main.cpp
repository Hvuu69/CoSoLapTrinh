#include <stdio.h>

int main() {
    int n, i, tong = 0;
    printf("Nhap N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        tong += (2 * i - 1);
    }

    printf("Tong cua %d so le dau tien la: %d\n", n, tong);
    return 0;
}