#include <stdio.h>

int main() {
    float km, tongTien = 0;

    printf("Nhap so km da di: ");
    scanf("%f", &km);

    if (km <= 0) {
        printf("So km khong hop le!\n");
    } else {

        if (km <= 1) {
            tongTien = km * 15000;
        } else if (km <= 5) {
            tongTien = 1 * 15000 + (km - 1) * 13000;
        } else {
            tongTien = 1 * 15000 + 4 * 13000 + (km - 5) * 11000;
        }


        if (km > 120) {
            tongTien = tongTien * 0.9;
        }

        printf("Tong tien taxi phai tra: %.0f VND\n", tongTien);
    }

    return 0;
}