#include <cstdio>

struct Product {
    char name[30];
    float price;
};

int main() {
    Product list[] = {{"Apple", 1.5}, {"Banana", 0.8}, {"Orange", 1.2}};
    int n = 3;
    Product readList[3];

    // Ghi mảng struct
    FILE *f = fopen("products.bin", "wb");
    fwrite(list, sizeof(Product), n, f);
    fclose(f);

    // Đọc mảng struct
    f = fopen("products.bin", "rb");
    fread(readList, sizeof(Product), n, f);
    fclose(f);

    for (int i = 0; i < n; i++) {
        printf("San pham %d: %s - Gia: %.1f\n", i+1, readList[i].name, readList[i].price);
    }

    return 0;
}