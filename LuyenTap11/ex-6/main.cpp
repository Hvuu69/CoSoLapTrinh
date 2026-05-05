#include <stdio.h>

long long tinhTongDeQuy(int n) {
    if (n == 1) return 1;
    return (long long)n * n + tinhTongDeQuy(n - 1);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap n > 0\n");
    } else {
        printf("Tong S (dung de quy) la: %lld\n", tinhTongDeQuy(n));
    }

    return 0;
}