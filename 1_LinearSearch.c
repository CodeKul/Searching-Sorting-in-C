#include<stdio.h>

int search (int array[], int size, int element) {
    int cnt = 0;
    while (cnt < size) {
        if (element == array[cnt]) {
            return (cnt);
        }
        cnt++;
    }
    return -1;
}

int main() {
    int arr[] = {34,67,27,46,73};
    int search_element = 0, found_location = 0;

    printf("Enter search element: ");
    scanf("%d", &search_element);

    found_location = search(arr, 5, search_element);

    if (found_location == -1) {
        printf("Element not found in array\n");
    }
    else {
        printf("Element found at %d location in array\n", found_location);
    }
    return 0;
}