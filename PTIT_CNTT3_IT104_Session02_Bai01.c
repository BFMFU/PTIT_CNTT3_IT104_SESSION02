#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arr;
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number<0) {
        printf("So luong khong hop le");
        return 0;
    }
    arr=  (int *) malloc(number * sizeof(int));
    for(int i = 0; i < number; i++){
        printf("Enter a number for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i = 0; i < number; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("The maximum number is: %d", max);
    free(arr);
    return 0;
}
