#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;
    int value;
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
    printf("Nhap gia tri bat ki: ");
    scanf("%d", &value);
    int pos1;
    int pos2;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i]+arr[j] == value) {
                pos1 = i;
                pos2 = j;
            }
        }
    }
    printf("%d, %d" , arr[pos1], arr[pos2]);
    free(arr);
    return 0;
}

