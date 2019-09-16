#include<stdio.h>

void insertionSort (int a[], int size) {
    int temp, pass, k;
    for (pass = 1; pass <= size - 1; pass++) {
        for ( k = pass; k >= 1; k--) { 
            if (a[k] < a[k-1]) {
                temp = a[k];
                a[k] = a[k-1];
                a[k-1] = temp;
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

    insertionSort(arr, 5);

    printf("\nAfter sorting: ");
    for(i=0; i < 5; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}