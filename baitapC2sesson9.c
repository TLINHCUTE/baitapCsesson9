#include<stdio.h>
#define MAX_SIZE 100

    int main() {
        int arr[MAX_SIZE];
        int n, position, newValue, i;
        printf(" nhap so phan tu ban dau: ");
        scanf("%d", &n);
        if(n > MAX_SIZE) {
            printf("so phan tu khong the qua 100.\n");
            return 1;
        }
        for (i = 0; i < n; i++) {
            printf("nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
        }
        printf("nhap vi tri can sua (tu 0 den %d): ", n - 1);
        scanf("%d", &position);
        if(position < 0 || position >= n) {
            printf("vi tri khong hop le.\n");
            return 1;
        }
        printf(" nhap gia tri moi: ");
        scanf("%d", &newValue);
        arr[position] = newValue;
        printf("mang sau khi sua:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
    }