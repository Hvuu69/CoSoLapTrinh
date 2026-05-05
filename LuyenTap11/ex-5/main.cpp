#include <stdio.h>

int main() {
    int n, i;
    long long s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        s += (long long)i * i;
    }

    printf("Tong S = 1^2 + 2^2 + ... + %d^2 la: %lld\n", n, s);
    return 0;
}