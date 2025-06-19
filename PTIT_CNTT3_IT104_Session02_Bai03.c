#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
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
    printf("Mang truoc khi dao nguoc la: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int j=n-1;
    for(int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    printf("Mang sau khi dao nguoc la: \n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
