#include <stdio.h>//bai10

void nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    if (*n >= 100) {
        printf("Mang da day!\n");
        return;
    }
    int value, pos;
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Nhap vi tri can them (0 -> %d): ", *n);
    scanf("%d", &pos);
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}

void suaPhanTu(int arr[], int n) {
    int pos, value;
    printf("Nhap vi tri can sua (0 -> %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &value);
    arr[pos] = value;
}

void xoaPhanTu(int arr[], int *n) {
    int pos;
    printf("Nhap vi tri can xoa (0 -> %d): ", *n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void sapXepTang(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sapXepGiam(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int linearSearch(int arr[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int value) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == value)
            return mid;
        else if (arr[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[100];
    int n = 0, choice;
    char option;

    do {
        printf("=============== MENU =============== \n");
        printf("1. Nhap so phan tu va gia tri cac phan tu \n");
        printf("2. In ra cac phan tu dang quan ly \n");
        printf("3. Them mot phan tu vao vi tri chi dinh \n");
        printf("4. Sua mot phan tu tai vi tri chi dinh \n");
        printf("5. Xoa mot phan tu tai vi tri chi dinh \n");
        printf("6. Sap xep cac phan tu \n");
        printf("7. Tim kiem phan tu nhap vao \n");
        printf("8. Thoat \n");
        printf ("==================================== \n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("  a. Giam dan \n");
                printf("  b. Tang dan \n");
                printf("Lua chon cua ban: ");
                scanf(" %c", &option);
                if (option == 'a' || option == 'A')
                    sapXepGiam(arr, n);
                else
                    sapXepTang(arr, n);
                break;
            case 7: {
                printf("  a. Tm kiem tuyen tinh \n");
                printf("  b. Tim kiem nhi phan \n");
                printf("Lua chon cua ban: ");
                scanf(" %c", &option);
                int value;
                printf("Nhap phan tu can tim: ");
                scanf("%d", &value);
                if (option == 'a' || option == 'A') {
                    int index = linearSearch(arr, n, value);
                    if (index == -1)
                        printf("Khong tim thay! \n");
                    else
                        printf("Tim thay tai vi tri %d \n", index);
                } else {
                    sapXepTang(arr, n);
                    int index = binarySearch(arr, n, value);
                    if (index == -1)
                        printf("Khong tim thay! \n");
                    else
                        printf("Tim thay tai vi tri %d \n", index);
                }
                break;
            }
            case 8:
                printf("Cam on vi da den! \n");
                break;
            default:
                printf("Lua chon khong hop le! \n");
        }
    } while (choice != 8);

    return 0;
}
