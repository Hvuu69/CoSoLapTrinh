#include <stdio.h>
#include <string.h>

struct Product {
    char name[50];
    double price;
};

int main() {
    struct Product p1, p2;

    printf("Nhap thong tin san pham 1:\n");
    printf("Ten: ");
    scanf(" %[^\n]", p1.name); 
    printf("Gia: ");
    scanf("%lf", &p1.price);

    printf("Nhap thong tin san pham 2:\n");
    printf("Ten: ");
    scanf(" %[^\n]", p2.name);
    printf("Gia: ");
    scanf("%lf", &p2.price);

    printf("\n--- Ket qua so sanh ---\n");
    if (p1.price > p2.price) {
        printf("%s co gia cao hon %s\n", p1.name, p2.name);
    } else if (p1.price < p2.price) {
        printf("%s co gia cao hon %s\n", p2.name, p1.name);
    } else {
        printf("Hai san pham bang gia nhau.\n");
    }

    return 0;
}