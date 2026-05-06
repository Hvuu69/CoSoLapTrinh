#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &c);

    if (isdigit(c)) {
        printf("Ky tu so la: %c\n", c);
    } 
    else if (isalpha(c)) {

        printf("Ky tu chu la: %c\n", toupper(c));
    } 
    else {
        printf("Day khong phai ky tu so cung khong phai chu cai.\n");
    }

    return 0;
}