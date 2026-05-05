#include <stdio.h>

void giaiPhuongTrinhBacNhat(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", -b / a);
    }
}

int main() {
    float a, b;
    printf("Nhap he so a va b cho pt ax + b = 0: ");
    scanf("%f %f", &a, &b);
    
    giaiPhuongTrinhBacNhat(a, b);
    
    return 0;
}