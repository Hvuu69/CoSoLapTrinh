#include <cstdio>
#include <cstring>

struct Student {
    char name[50];
    int age;
};

int main() {
    Student s1 = {"Nguyen Van A", 20};
    Student s2;

    // Ghi struct vào file
    FILE *f = fopen("student.bin", "wb");
    fwrite(&s1, sizeof(Student), 1, f);
    fclose(f);

    // Đọc struct từ file
    f = fopen("student.bin", "rb");
    fread(&s2, sizeof(Student), 1, f);
    fclose(f);

    // Kiểm tra
    printf("Du lieu doc ra: Name: %s, Age: %d\n", s2.name, s2.age);
    if (strcmp(s1.name, s2.name) == 0 && s1.age == s2.age) {
        printf("Ket qua: Chinh xac!\n");
    }

    return 0;
}