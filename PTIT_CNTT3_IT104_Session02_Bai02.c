#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr;
    int n;
    int count = 0;
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
    int number;
    printf("Nhap mot so bat ki de kiem tra: ");
    scanf("%d", &number);
    for (int i=0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }
    printf("%d", count);
    free(arr);
    return 0;
}
