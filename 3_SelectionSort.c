#include<stdio.h>

void selectionSort (int a[], int size) {
    int temp, pass, k, min, minIndex;
    for (pass = 0; pass < size - 1; pass++) {
        min = a[pass];
        minIndex = pass;
        for (k = pass + 1; k < size; k++) {
            if (a[k] < min) {
                min = a[k];
                minIndex = k;
            }
        }
        temp = a[pass];
        a[pass] = a[minIndex];
        a[minIndex] = temp;
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

    selectionSort(arr, 5);

    printf("\nAfter sorting: ");
    for(i=0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}