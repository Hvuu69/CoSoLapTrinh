#include <cstdio>

int main() {
    FILE *f;
    char name[50];
    int age;

    f = fopen("input.txt", "r");
    if (f != NULL) {
        // fscanf đọc dữ liệu theo định dạng chuỗi và số nguyên
        fscanf(f, "%s %d", name, &age);
        
        printf("Du lieu doc duoc tu file:\n");
        printf("Ten: %s || ", name);
        printf("Tuoi: %d", age);
        
        fclose(f);
    }
    return 0;
}