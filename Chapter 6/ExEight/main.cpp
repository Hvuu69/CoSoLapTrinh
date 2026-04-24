#include <cstdio>

int main() {
    FILE *fSrc = fopen("source.txt", "r");
    FILE *fDest = fopen("destination.txt", "w");

    if (fSrc == NULL || fDest == NULL) {
        printf("Khong the mo file!\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(fSrc)) != EOF) {
        // Nếu là chữ thường, đổi thành chữ hoa
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32; 
        }
        fputc(ch, fDest); // Ghi ký tự (đã đổi hoặc giữ nguyên) vào file mới
    }

    printf("Da sao chep va chuyen doi thanh chu hoa thanh cong.\n");

    fclose(fSrc);
    fclose(fDest);
    return 0;
}