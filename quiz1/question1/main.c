#include <stdio.h>

int main() {
    int arr[10] = {2, 3, 4, 2, 7, 8, 4, 1, 9, 6}; 
    int i, j, k, size;

    size = sizeof(arr) / sizeof(arr[0]);
    printf("size of arr: %d\n", size);

    for (i = 0; i < size; i++) {

        for (j = i + 1; j < size;) {

            if (arr[i] == arr[j]) {

                for (k = j; k < size - 1; k++) {

                    arr[k] = arr[k + 1];

                }

                size--;

            } else {

                j++;

            }
        }
    }

    printf("Array elements after deletion of duplicate elements: ");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
