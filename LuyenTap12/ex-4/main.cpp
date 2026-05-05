#include <stdio.h>

int timMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int a[] = {15, 3, 9, 21, 2, 30};
    int n = sizeof(a) / sizeof(a[0]);
    
    int minVal = timMin(a, n);
    
    printf("Gia tri nho nhat trong mang la: %d\n", minVal);
    
    return 0;
}