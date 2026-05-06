#include <stdio.h>

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Hoan vi
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {5, 1, 9, 3, 7, 2};
    int n = sizeof(a) / sizeof(a[0]);
    
    printf("Mang truoc khi sap xep: ");
    inMang(a, n);
    
    sapXepGiamDan(a, n);
    
    printf("Mang sau khi sap xep giam dan: ");
    inMang(a, n);
    
    return 0;
}
