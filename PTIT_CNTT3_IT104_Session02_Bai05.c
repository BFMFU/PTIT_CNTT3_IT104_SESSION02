#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    int pos;
    printf("Nhap so luong phan tu cho mang: ");
    scanf("%d", &n);
    if (n<0) {
        printf("So luong khong hop le");
        return 0;
    }
    arr=  (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Nhap gia tri cho phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi thay doi ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &pos);
    if (pos>n) {
        printf("Vi tri khong hop le.");
        return 0;
    }
    for(int i = pos; i < n; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Mang sau khi thay doi ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
