#include<stdio.h>
int binarySearch (int array[], int size, int item) {
    int low = 0, count = 0;
    int high = size - 1;
    int middle;
    while (low <= high) {
        count++;
        middle = (high + low) / 2;
        if (item == array[middle]) {
            return middle;
        }
        else if (item < array[middle]) {
            high = middle - 1;
        }
        else {
            low = middle + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 32, 43, 57, 85};
    int search_element = 0, found_location = 0;

    printf("Enter search element: ");
    scanf("%d", &search_element);

    found_location = binarySearch(arr, 5, search_element);

    if (found_location == -1) {
        printf("Element not found in array\n");
    }
    else {
        printf("Element found at %d location in array\n", found_location);
    }
    return 0;
}