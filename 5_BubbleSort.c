#include<stdio.h>

void bubbleSort (int a[], int size) {
    int temp, k, pass;
    for (pass = 1; pass <= size - 1; pass++) {
        for (k = 0; k < size - pass ; k++) {
            if (a[k] > a[k+1]) {
                temp = a[k];
                a[k] = a[k+1];
                a[k+1] = temp;
            }
        }
    }
    return;
}

int main() {
    int arr[] = {45, 23, 72, 84, 38};
    int i = 0;

    printf("Before sorting: ");
    for(i=0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }

    bubbleSort(arr, 5);

    printf("\nAfter sorting: ");
    for(i=0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}