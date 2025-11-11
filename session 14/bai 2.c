#include <stdio.h> //bai4

void inMang(int arr[], int n) {
    printf("Cac phan tu trong mang la: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    inMang(a, n); 
    return 0;
}

