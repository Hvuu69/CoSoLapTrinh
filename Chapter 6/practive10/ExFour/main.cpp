#include <cstdio>

int main() {
    int valueToWrite = 999;
    int valueToRead;

    // 1. Ghi vào vị trí byte thứ 20
    FILE *f = fopen("random_access.bin", "wb+"); // "wb+" cho phép cả ghi và đọc
    fseek(f, 20, SEEK_SET); // Nhảy đến byte thứ 20 từ đầu file
    fwrite(&valueToWrite, sizeof(int), 1, f);

    // 2. Đọc lại để kiểm tra
    fseek(f, 20, SEEK_SET); // Nhảy lại về vị trí 20 để đọc
    fread(&valueToRead, sizeof(int), 1, f);

    // 3. In vị trí con trỏ sau khi đọc
    long pos = ftell(f); // ftell trả về vị trí hiện tại của con trỏ file

    printf("Gia tri doc ra tai vi tri 20: %d\n", valueToRead);
    printf("Vi tri con tro hien tai: %ld\n", pos); 
    // Vị trí sẽ là 20 + sizeof(int). Nếu int là 4 byte, pos sẽ là 24.

    if (valueToWrite == valueToRead) printf("Ket qua: Chinh xac!\n");

    fclose(f);
    return 0;
}