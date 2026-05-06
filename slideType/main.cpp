//Hà Minh Vũ Bài 4
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int laSNT = 1;

    printf("nhap so nguyen duong N :");
    scanf("%d", n);

    if (n < 2)
    {
        laSNT = 0;
    } else {
        for (i = 2, i <= sqrt(n), i++) {
            if (n % i == 0)
            {
                laSNT = 0 ;
                break;
            }
        }
    }

    if(laSNT)
        printf ("la so nguyen to.\n", n);
    else
        printf("khong phai la so nguyen to.\n", n);

}